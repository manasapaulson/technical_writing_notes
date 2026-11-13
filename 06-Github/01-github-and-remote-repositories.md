# GitHub and Remote Repositories

## 1. What Is GitHub?

GitHub is an online platform for hosting Git repositories and collaborating on software projects.

### Major features

- Host and share source code.
- Maintain project history through Git.
- Collaborate with other developers.
- Review code using pull requests.
- Track bugs and tasks using Issues.

**Remember:** Git manages version history. GitHub provides hosting and collaboration features around Git repositories.

## 2. Exploring the GitHub Interface

A GitHub repository page commonly provides access to:

- **Code:** Project files and directories.
- **Issues:** Bug reports and task discussions.
- **Pull requests:** Proposed changes and reviews.
- **Actions:** Automated workflows and testing.
- **Settings:** Repository permissions and configuration.

Practical activity: Open a public repository and identify its files, commit history, branches, Issues, and pull requests.

## 3. Creating a GitHub Account

1. Visit https://github.com/.
2. Create an account using an email address.
3. Verify the email address if prompted.
4. Enable two-factor authentication for better security.
5. Sign in and open your profile.

**Security tip:** Never share passwords, personal access tokens, or private SSH keys.

## 4. Creating a GitHub Repository

1. Sign in to GitHub.
2. Select **New repository**.
3. Enter a repository name, such as `calculator`.
4. Choose public or private visibility.
5. Optionally add a README and `.gitignore`.
6. Select **Create repository**.

### Public vs Private

- **Public:** Anyone can view the repository.
- **Private:** Access is limited to authorised users.

## 5. Understanding the README File

A `README.md` file introduces the project and explains how to use it. It is commonly written in Markdown.

Example:

```markdown
# Calculator

A simple Python calculator.

## Features
- Addition
- Subtraction

## Run
python main.py
```

A useful README may include:

- Project purpose and features
- Installation requirements
- Usage instructions and examples
- Contributors and licensing information

## 6. Connecting a Local Repository to GitHub

A **remote** links a local Git repository to a repository hosted on another system.

Add a remote:

```bash
git remote add origin https://github.com/USERNAME/calculator.git
```

- `git remote add` adds a remote connection.
- `origin` is the conventional name for the remote.
- The URL identifies the hosted repository.

Replace `USERNAME` with your GitHub username and use the actual URL of your repository.

## 7. Checking Remote Connections

```bash
git remote -v
```

Example output:

```text
origin  https://github.com/USERNAME/calculator.git (fetch)
origin  https://github.com/USERNAME/calculator.git (push)
```

- The fetch URL is used to retrieve remote information.
- The push URL is used to send commits.
- A remote can have different fetch and push URLs.

## 8. Pushing Code to GitHub

The `git push` command sends local commits to a remote repository.

```bash
git branch -M main
git push -u origin main
```

- `git branch -M main` renames the current branch to `main`.
- `git push` sends commits to the remote.
- `-u` sets the upstream tracking relationship.

**Prerequisites:** A remote must be configured, and you must have the required authentication and permissions.

## 9. Cloning a GitHub Repository

Cloning creates a local copy of a remote repository, including its Git history.

```bash
git clone https://github.com/USERNAME/calculator.git
```

Cloning typically:

- Downloads the repository's files and history.
- Creates a local repository.
- Configures the original repository as a remote named `origin`.
- Sets up local references to remote branches.

## 10. Fetching and Pulling Changes

These commands obtain updates from a remote repository.

### Fetch

```bash
git fetch origin
```

Downloads remote updates without integrating them into the current branch.

### Pull

```bash
git pull
```

Fetches updates and integrates them into the current branch, typically by merging or rebasing according to configuration.

### Fetch vs Pull

| Fetch | Pull |
|---|---|
| Downloads remote updates | Downloads and integrates remote updates |
| Does not integrate changes into the current branch | Attempts to integrate changes into the current branch |
| Allows you to inspect updates first | Updates the current branch |

## 11. Complete Basic GitHub Workflow

For a new local repository:

```bash
git init
git add .
git commit -m "Initial commit"
git remote add origin REPOSITORY_URL
git push -u origin main
```

Replace `REPOSITORY_URL` with the URL of the GitHub repository.

Outcome: Local commits are published to the configured GitHub repository.
