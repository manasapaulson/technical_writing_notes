# Branches and Collaboration

## 1. What Is a Branch?

A branch is an independent line of development. It allows changes to be made without directly modifying another branch.

- The `main` branch commonly contains the primary project history.
- A feature branch isolates new development.
- Branches can later be merged.

A branch is a movable reference to a commit, not a separate copy of the entire project.

## 2. Why Use Branches?

**Without branches**
- Experimental changes affect `main`.
- Incomplete features can mix with stable code.
- Reviewing individual changes is harder.

**With branches**
- Features can be developed independently.
- Bugs can be fixed separately.
- Changes can be reviewed before merging.

Example: Create a separate branch to implement a login feature while keeping `main` stable.

## 3. Creating and Listing Branches

List local branches:

```bash
git branch
```

Create a branch:

```bash
git branch feature-login
```

The current branch is marked with an asterisk (`*`). Creating a branch does not automatically switch to it.

## 4. Switching Branches

Use `git switch` to change the current branch.

```bash
git switch feature-login
```

To return to the main branch:

```bash
git switch main
```

Git updates the working directory to match the selected branch. Uncommitted changes may prevent switching if they would be overwritten.

Check the current branch using:

```bash
git branch
```

## 5. Creating and Switching to a Branch

The `-c` option creates a new branch and switches to it.

```bash
git switch -c feature-login
```

Typical workflow:

1. Start from the appropriate base branch.
2. Create a feature branch.
3. Edit and test the code.
4. Commit the changes.

Use descriptive branch names, such as:

- `feature-login`
- `fix-navbar`
- `docs-update`

## 6. Merging Branches

Merging integrates changes from one branch into another.

Example:

```bash
git switch main
git merge feature-login
```

Steps:

1. Switch to the branch that should receive the changes.
2. Run `git merge` with the source branch.
3. Resolve any conflicts if Git reports them.
4. Test the result.

**Important:** The target branch is the branch currently checked out. In the example, `main` receives the changes from `feature-login`.

## 7. Understanding Merge Conflicts

A merge conflict occurs when Git cannot automatically combine competing changes.

Example: Two developers edit the same line in `main.py`:

- Developer A changes the value to `10`.
- Developer B changes the same value to `20`.

Conflicts can occur because of:

- Competing edits to the same lines.
- Changes to a file deleted in another branch.
- Other incompatible file changes.

A conflict is a request for human or tool-assisted resolution, not necessarily a sign that the repository is damaged.

## 8. Resolving Merge Conflicts

Git may mark conflicting sections in a file.

Example conflict markers:

```text
<<<<<<< HEAD
result = 10
=======
result = 20
>>>>>>> feature-login
```

Resolution steps:

1. Open the conflicting file.
2. Decide which change to keep, or combine both.
3. Remove the conflict markers.
4. Stage the resolved file and complete the merge.

For example:

```bash
git add main.py
git commit
```

The exact commit step may depend on the merge state and Git's instructions.

## 9. What Is a Pull Request?

A **pull request (PR)** proposes changes for review and integration into another branch on a hosting platform such as GitHub.

### Typical pull request process

1. Push a feature branch to GitHub.
2. Open a pull request against the target branch.
3. Explain the changes and their purpose.
4. Request reviews and run checks.
5. Address feedback and merge when approved.

A pull request supports discussion and review. It is **not** the same as the local `git pull` command.

## 10. Forking a Repository

A **fork** is a separate repository copy under another account or namespace on a hosting platform.

Forks allow contributors to:

- Work independently on a copy of a project.
- Contribute to projects they do not own.
- Propose changes to the original project through pull requests.

## 11. Code Review and Collaboration

Code review helps teams improve code quality before changes are integrated into a shared branch.

**Reviewer responsibilities**
- Check correctness.
- Identify potential bugs.
- Suggest improvements.
- Verify tests and readability.

**Contributor responsibilities**
- Explain the changes.
- Respond to feedback.
- Update the branch.
- Verify the final result.

Good practice: Keep pull requests focused, small enough to review, and supported by relevant tests.

## 12. Collaborative GitHub Workflow

```text
Create branch -> Make changes -> Commit -> Push branch
                                            |
                                            v
                                      Open pull request
                                            |
                                            v
                                      Review changes
                                            |
                                            v
                                         Merge
```

Branches isolate work, commits record changes, and pull requests support review before integration.

## 13. Complete Developer Workflow

1. Create or clone a repository.
2. Create a branch for a new feature.
3. Modify files and test the changes.
4. Stage and commit the changes.
5. Push the branch to GitHub.
6. Open a pull request and request review.
7. Merge the approved changes.

Typical workflow:

```text
Edit -> Stage -> Commit -> Push -> Review -> Merge
```
