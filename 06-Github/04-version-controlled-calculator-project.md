# Mini Project: Version-Controlled Calculator

## Objective

Create a simple Python calculator, track its history using Git, and publish the project on GitHub.

### Project requirements

- Create a Python program.
- Initialise a local Git repository.
- Record the initial version in a commit.
- Publish the repository on GitHub.
- Implement a new feature using a branch.
- Submit the feature through a pull request.

**Expected outcome:** A GitHub repository containing the calculator code, commit history, and a completed feature workflow.

## Step 1: Initialise the Repository

Create a directory and initialise Git:

```bash
mkdir calculator
cd calculator
git init
```

Create a Python file named `main.py`:

```python
print("Calculator")
a = 10
b = 5
print("Sum:", a + b)
```

## Step 2: Record the First Version

Check the status, stage the Python file, and create the first commit:

```bash
git status
git add main.py
git status
git commit -m "Add initial calculator"
git log --oneline
```

Observe the results:

- The file moves from untracked to staged.
- The commit records the staged version.
- The log displays the new commit.

**Learning outcome:** Understand how Git records changes in repository history.

## Step 3: Publish the Project on GitHub

Create an **empty** repository named `calculator` on GitHub. For this exercise, do not initialise it with a README.

Run:

```bash
git branch -M main
git remote add origin REPOSITORY_URL
git push -u origin main
```

Replace `REPOSITORY_URL` with your repository URL. Complete authentication if prompted.

Open the GitHub repository to verify that the source code and initial commit are visible.

## Step 4: Implement a Feature Branch

Create a branch for a new calculator feature:

```bash
git switch -c feature-subtraction
```

Add subtraction to `main.py`:

```python
print("Difference:", a - b)
```

Stage, commit, and push the feature:

```bash
git add main.py
git commit -m "Add subtraction feature"
git push -u origin feature-subtraction
```

## Step 5: Create a Pull Request

After pushing the feature branch:

1. Open the repository on GitHub.
2. Select the option to create a pull request.
3. Set the base branch to `main`.
4. Set the compare branch to `feature-subtraction`.
5. Review the changes and create the pull request.
6. Merge the pull request after reviewing the changes.

## Step 6: Update the Local Main Branch

After the pull request is merged, switch back to the local `main` branch and obtain the merged changes:

```bash
git switch main
git pull origin main
```

## Final Checklist

- [ ] Created the calculator project.
- [ ] Initialised a local Git repository.
- [ ] Created the first commit.
- [ ] Created an empty GitHub repository.
- [ ] Connected the local repository to GitHub.
- [ ] Pushed the `main` branch.
- [ ] Created and pushed `feature-subtraction`.
- [ ] Opened and merged a pull request.
- [ ] Pulled the merged changes into the local `main` branch.
