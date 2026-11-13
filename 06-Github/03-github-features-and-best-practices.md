# GitHub Features and Best Practices

## 1. Writing Good Commit Messages

A commit message should clearly describe the purpose of a change.

| Poor messages | Better messages |
|---|---|
| `changes` | `Add login validation` |
| `update` | `Fix division by zero` |
| `final code` | `Update README instructions` |
| `bug fixed` | `Remove unused functions` |

Use short, specific messages that explain what the commit does. Keep unrelated changes in separate commits.

## 2. Git Tags and Releases

A **tag** identifies a particular point in repository history, often used to mark a software version.

Useful commands:

```bash
git tag
git tag -a v1.0.0 -m "Version 1.0.0"
git show v1.0.0
git push origin v1.0.0
```

- Tags identify important commits.
- Semantic versioning commonly uses `MAJOR.MINOR.PATCH`.
- GitHub Releases can attach notes and downloadable files to a version tag.

## 3. GitHub Issues

GitHub Issues help teams discuss and track bugs, features, questions, and project tasks.

Common uses:

- Report a software bug.
- Suggest a new feature.
- Assign tasks to contributors.
- Discuss requirements and possible solutions.

Example issue:

```text
Title: Calculator crashes for zero division

Description:
Handle division by zero and display an appropriate error message.
```

## 4. GitHub Projects

GitHub Projects provides tools for organising work and tracking project progress.

Example task board:

| Status | Example task |
|---|---|
| Todo | Design calculator interface |
| In Progress | Implement division operation |
| In Review | Review input validation |
| Done | Write project README |

Projects can organise work using tables or board views, track task progress, and link tasks to Issues and pull requests.

## 5. Fork vs Clone

| Feature | Fork | Clone |
|---|---|---|
| Meaning | Creates a separate hosted repository copy | Creates a local repository copy |
| Location | GitHub or another hosting platform | Local computer |
| Purpose | Independent contribution | Local development |
| Typical use | Contribute to another project | Work on a repository locally |

Example workflow: Fork a public project on GitHub, clone your fork, make changes, and propose them to the original project through a pull request.

## 6. Merge vs Rebase

Both commands integrate changes, but they handle history differently.

### Merge

```bash
git switch main
git merge feature
```

- Combines branch histories.
- May create a merge commit.
- Preserves existing commits.

### Rebase

```bash
git switch feature
git rebase main
```

- Replays commits on a new base.
- Creates rewritten commit identities.
- Can produce a linear history.

**Caution:** Avoid rebasing shared commits unless the team understands the consequences of rewriting history.

## 7. Common Git Errors and Solutions

| Problem | Possible solution |
|---|---|
| Untracked files | Stage required files using `git add`. |
| Push rejected | Fetch remote changes and integrate them. |
| Merge conflict | Edit conflicting files and complete the merge. |
| Wrong branch | Check the current branch using `git branch`. |
| Nothing to commit | Inspect `git status` and staged changes. |
| Authentication failed | Check credentials and repository permissions. |

A useful diagnostic command is:

```bash
git status
```

## 8. Authentication and Security

GitHub connections can use HTTPS or SSH.

- Use a personal access token when required for HTTPS authentication.
- Use SSH keys securely when choosing SSH.
- Never commit passwords, API keys, or private tokens.
- Use `.gitignore` for sensitive local configuration files.
- Review repository visibility and access permissions.

**Important:** Adding a secret to `.gitignore` does not remove it from Git history if it has already been committed.

## 9. Git Best Practices

1. Commit changes frequently and logically.
2. Write clear commit messages.
3. Use descriptive branch names.
4. Review changes before committing.
5. Pull or fetch updates regularly.
6. Test changes before merging.
7. Keep credentials and unnecessary generated files out of the repository.
8. Document projects using a README.

A clean repository history makes collaboration, debugging, and maintenance easier.
