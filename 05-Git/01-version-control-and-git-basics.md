# Version Control and Git Basics

## 1. What Is Version Control?

Version control is a system that records changes to files over time. It allows previous versions to be inspected, compared, and recovered.

### Key capabilities

- Track modifications to files.
- Identify who made a change and when.
- Restore earlier versions when necessary.
- Support multiple contributors working on the same project.

## 2. Why Do We Need Version Control?

In a project shared by several developers:

- Files may be overwritten accidentally.
- Previous working versions may be lost.
- Finding when and why an error was introduced can be difficult.
- Combining changes from different contributors can become complicated.

Version control makes changes traceable and keeps project history manageable.

### Life without version control

A project folder may end up containing files such as:

```text
project.py
project final.py
project final new.py
project final latest.py
project final latest fixed.py
```

It becomes difficult to know which file is correct, what changed between versions, or how to recover an earlier version.

## 3. Benefits of Version Control

**For developers**
- Change tracking
- Error recovery
- Branch-based development
- Better collaboration

**For projects**
- Organised history
- Accountability
- Reproducibility
- Easier maintenance

## 4. Types of Version Control Systems

1. **Local VCS:** Versions are managed on one computer.
2. **Centralized VCS:** A central server stores the project history. Subversion (SVN) is an example.
3. **Distributed VCS:** Each clone contains repository history. Git is an example.

## 5. Introduction to Git

Git is a **distributed version control system** used to track changes in files and coordinate development.

Important features:

- Maintains project history through commits.
- Supports parallel development using branches.
- Enables local version control without a network.
- Supports merging contributions from different branches.

## 6. Git vs GitHub

| Feature | Git | GitHub |
|---|---|---|
| Type | Version control system | Hosting and collaboration platform |
| Location | Works locally | Provides remote repositories |
| Purpose | Tracks project changes | Shares and supports collaboration on projects |
| Network | Local work is possible offline | Online features require connectivity |

**Remember:** Git is the version control system. GitHub hosts Git repositories and provides collaboration features around them.

## 7. How Git Works

Git records project changes as a sequence of commits. For example:

```text
Version 1  ->  Version 2  ->  Version 3
Initial code   Bug fix       New feature
```

The usual process is:

1. Modify files in the working directory.
2. Select changes and add them to the staging area.
3. Commit the staged changes.
4. Inspect the project history when needed.

A **commit** represents a recorded project snapshot, not simply a backup of an individual file.

## 8. Git Architecture

Git supports local development and collaboration through remote repositories.

```text
Working Directory  ->  Local Repository  ->  Remote Repository
      Edit               Commit                  Push
                                                  ^
                                                  |
                                                Pull
```

- **Working directory:** The files currently being edited.
- **Local repository:** Stores local commits and project history.
- **Remote repository:** A shared repository hosted on another system, such as GitHub.

## 9. Real-World Applications

- **Software engineering:** Managing source code and releases.
- **Team projects:** Combining work from multiple developers.
- **Research:** Tracking experimental code and configuration changes.
- **Machine learning:** Versioning training scripts and documentation.
- **Documentation:** Maintaining LaTeX reports and technical manuals.
