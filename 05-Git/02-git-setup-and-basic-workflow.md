# Git Setup and Basic Workflow

## 1. Installing Git

Git can be installed on Windows, Linux, and macOS.

### Windows

Download Git from the official website:

https://git-scm.com/downloads

### Ubuntu / Debian Linux

```bash
sudo apt update
sudo apt install git
```

### macOS

Using Homebrew:

```bash
brew install git
```

After installation, open a terminal, Git Bash, or an IDE terminal to run Git commands.

## 2. Verifying Git Installation

Run:

```bash
git --version
```

Example output:

```text
git version 2.x.x
```

The version number depends on the installed release. If the command is not recognised, check the installation and system PATH.

## 3. Configuring Git

Git uses configuration values to identify the author of commits.

Set your name:

```bash
git config --global user.name "Your Name"
```

Set your email:

```bash
git config --global user.email "you@example.com"
```

Verify the configuration:

```bash
git config --global --list
```

These values identify the commit author. **They do not authenticate you to GitHub.**

## 4. What Is a Git Repository?

A Git repository stores project history and the information needed to track changes.

A project might contain:

```text
my-project/
├── main.py
├── README.md
├── data.csv
└── requirements.txt
```

Git stores its repository metadata in a hidden directory named `.git`. This includes information such as commit history, branch information, the object database, and repository configuration.

## 5. Creating a Git Repository

Steps:

1. Create a project directory.
2. Open a terminal inside that directory.
3. Initialise Git.

```bash
mkdir my-project
cd my-project
git init
```

- `mkdir` creates a directory.
- `cd` changes the current directory.
- `git init` initialises a Git repository in the current directory.

## 6. The Three Main Areas of Git

Git uses three main areas:

### Working Directory

The project files where changes are made.

### Staging Area

The area where selected changes are prepared for the next commit.

### Repository

The committed project history.

The basic movement is:

```text
Working Directory  --git add-->  Staging Area
Staging Area       --git commit--> Repository
```

## 7. Understanding a Commit

A commit records a set of staged changes in the repository.

Example:

```bash
git add main.py
git commit -m "Add main program"
```

A commit includes information such as:

- A unique identifier (hash)
- Author and timestamp
- A commit message
- References to the recorded project snapshot and its parent commit or commits

Write meaningful commit messages that explain the purpose of the change.

## 8. The Basic Git Workflow

```text
Edit files -> Stage changes -> Commit changes -> Push to GitHub
```

Commands to remember:

```bash
git status
git add .
git commit -m "Describe the change"
git push
```

- `git status` inspects the repository status.
- `git add .` stages changes in the current directory.
- `git commit -m "message"` records the staged changes.
- `git push` uploads local commits to a remote repository.

A remote must be configured before pushing.

## 9. A Simple First Repository

The following example creates a small local project and records its first version.

```bash
mkdir calculator
cd calculator
git init
```

Create a file named `main.py` containing:

```python
print(2 + 3)
```

Then run:

```bash
git status
git add main.py
git commit -m "Add calculator program"
git log --oneline
```

This example demonstrates repository initialisation, file creation, staging, committing, and viewing history.
