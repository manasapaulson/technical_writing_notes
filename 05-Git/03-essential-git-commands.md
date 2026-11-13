# Essential Git Commands

This file summarises the commands used to inspect a repository, stage and record changes, compare versions, and undo mistakes.

## 1. Checking Repository Status — `git status`

```bash
git status
```

Displays the current state of the working directory and staging area. It helps identify:

- Untracked files
- Modified files
- Staged changes ready to commit
- Whether the working tree is clean

A newly created file is reported as untracked until it is added.

## 2. Tracking Files — `git add`

Stage a particular file:

```bash
git add main.py
```

Typical workflow:

1. Create or modify `main.py`.
2. Run `git status`.
3. Stage the file using `git add main.py`.
4. Run `git status` again.

**Important:** `git add` stages the file's current contents. If you edit the file again after staging it, stage it again to include the latest changes.

### Staging multiple changes

Stage all changes in the current directory:

```bash
git add .
```

Stage selected files:

```bash
git add file1.py file2.py
```

Stage files matching a pattern:

```bash
git add *.py
```

Use `git diff --staged` to inspect staged changes before committing. Avoid accidentally staging sensitive or generated files.

## 3. Creating Commits — `git commit`

```bash
git add main.py
git commit -m "Add main program"
```

A good commit message should be concise, specific, and describe the purpose of the change.

Examples:

- `Add input validation`
- `Fix division by zero error`
- `Update project documentation`

Avoid vague messages such as `changes` or `update`.

## 4. Viewing Commit History — `git log`

Full commit history:

```bash
git log
```

It displays information such as the commit hash, author, date, and commit message.

Compact history:

```bash
git log --oneline
```

Example:

```text
a1b2c3d Add input validation
d4e5f6a Fix calculation bug
b7c8d9e Initial project commit
```

Each line represents one commit. The abbreviated hash identifies the commit and the message summarises the change.

## 5. Comparing Changes — `git diff`

```bash
git diff
```

Useful variations:

| Command | What it shows |
|---|---|
| `git diff` | Changes not yet staged |
| `git diff --staged` | Changes staged for commit |
| `git diff HEAD` | Tracked changes relative to the current commit, including staged and unstaged changes |

Use these commands to inspect changes and catch unintended edits before committing.

## 6. Listing Tracked Files — `git ls-files`

```bash
git ls-files
```

Lists files known to Git in the index. Untracked files are not normally shown. A listed file may have staged changes that have not yet been committed.

## 7. Ignoring Files — `.gitignore`

A `.gitignore` file specifies intentionally untracked files and directories that Git should ignore.

Example `.gitignore`:

```gitignore
__pycache__/
*.pyc
.env
*.log
data/
```

Typical uses include:

- Temporary files and caches
- Local environment configuration
- Logs and generated outputs
- Large datasets that should not be committed

**Important:** Adding a file to `.gitignore` does not remove it from Git history if it has already been committed.

## 8. Renaming and Deleting Files

Rename or move a file:

```bash
git mv old.py new.py
```

Remove a tracked file:

```bash
git rm old.py
```

- `git mv` stages the rename operation.
- `git rm` stages the removal and removes the file from the working directory.

Git often detects renames by comparing file contents; it does not store renames as a separate fundamental object type.

## 9. Unstaging Changes — `git restore --staged`

If a file was staged accidentally, remove it from the staging area without discarding the working-directory changes.

```bash
git restore --staged main.py
```

The staged version is removed from the index, but the edits in the working directory are preserved. The file may appear as modified or untracked.

**Unstaging is different from deleting your changes.**

## 10. Discarding Uncommitted Changes — `git restore`

```bash
git restore main.py
```

For a tracked file, this restores the working copy from the index and discards its unstaged modifications.

<blockquote>
**Warning:** Unstaged changes discarded by this command may be difficult or impossible to recover. Inspect changes with `git diff` and save important work elsewhere before running it.
</blockquote>

## 11. Reverting a Commit — `git revert`

`git revert` creates a new commit that reverses the changes introduced by an earlier commit.

```bash
git log --oneline
git revert COMMIT_ID
```

- Existing commit history is preserved.
- A new commit records the reversal.
- It is often suitable for undoing published changes.

For example, if a commit introduced a bug, reverting it can undo its changes without deleting the original commit from history.

## 12. Quick Command Reference

| Purpose | Command |
|---|---|
| Check repository status | `git status` |
| Stage one file | `git add filename` |
| Stage all current-directory changes | `git add .` |
| Commit staged changes | `git commit -m "message"` |
| View full history | `git log` |
| View compact history | `git log --oneline` |
| See unstaged changes | `git diff` |
| See staged changes | `git diff --staged` |
| List tracked files | `git ls-files` |
| Unstage a file | `git restore --staged filename` |
| Discard unstaged edits | `git restore filename` |
| Reverse a commit with a new commit | `git revert COMMIT_ID` |

## 13. Important Difference: Unstage, Restore, and Revert

| Operation | Effect |
|---|---|
| `git restore --staged filename` | Removes changes from staging; keeps working-directory edits |
| `git restore filename` | Discards unstaged edits to a tracked file |
| `git revert COMMIT_ID` | Creates a new commit that reverses an earlier commit |

Choose carefully: these commands do different things.
