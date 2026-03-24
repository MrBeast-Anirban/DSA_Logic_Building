from pathlib import Path
import re
from urllib.parse import quote

REPO_OWNER = "mrbeast-anirban"
REPO_NAME = "git@github.com:MrBeast-Anirban/DSA_Logic_Building.git"
BRANCH = "main"

README_PATH = Path("README.md")
PROBLEMS_DIR = Path("problems")

START_MARKER = "<!-- PROBLEM-LIST:START -->"
END_MARKER = "<!-- PROBLEM-LIST:END -->"

problem_pattern = re.compile(r"^\s*//\s*PROBLEM:\s*(.+?)\s*$")

def extract_problem_statement(file_path: Path) -> str | None:
    try:
        with file_path.open("r", encoding="utf-8") as f:
            for line in f:
                match = problem_pattern.match(line)
                if match:
                    return match.group(1).strip()
    except UnicodeDecodeError:
        return None
    return None

def github_file_url(file_path: Path) -> str:
    quoted_path = "/".join(quote(part) for part in file_path.as_posix().split("/"))
    return f"https://github.com/MrBeast-Anirban/DSA_Logic_Building/blob/{BRANCH}/{quoted_path}"

def build_problem_list() -> str:
    cpp_files = sorted(PROBLEMS_DIR.rglob("*.cpp"))
    entries = []

    for index, file_path in enumerate(cpp_files, start=1):
        statement = extract_problem_statement(file_path)
        if not statement:
            statement = file_path.stem.replace("-", " ").replace("_", " ").strip().title()

        url = github_file_url(file_path)
        entries.append(f"{index}. {statement} [[link]]({url})")

    return "\n".join(entries) if entries else "_No problems added yet._"

def update_readme():
    if not README_PATH.exists():
        raise FileNotFoundError("README.md not found")

    content = README_PATH.read_text(encoding="utf-8")

    if START_MARKER not in content or END_MARKER not in content:
        raise ValueError("README markers not found")

    new_list = build_problem_list()
    replacement = f"{START_MARKER}\n{new_list}\n{END_MARKER}"

    updated = re.sub(
        rf"{re.escape(START_MARKER)}.*?{re.escape(END_MARKER)}",
        replacement,
        content,
        flags=re.DOTALL,
    )

    README_PATH.write_text(updated, encoding="utf-8")

if __name__ == "__main__":
    update_readme()
