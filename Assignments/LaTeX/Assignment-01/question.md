1 Hello World!
1. Create a new document.
2. In the editor window, type the following lines:
\documentclass{article}
\begin{document}
Hello World
\end{document}
3. Save the file.
4. Compile your document and view the output.
2 My first latex document
1. Open first_latex_example.tex in your LATEX editor
2. Read through the file, taking note of whitespace and special characters – these are described in the
document
3. Compile the document to check your understanding of what you have just read
4. Try adding another section or subsection, then recompiling
5. Add a table of contents using the \tableofcontents command
6. Change the font size used for the whole document by changing the options given to the \documentclass
command e.g. \documentclass[12pt]{article}
7. Open the documentation for the latex-document package.
Locate the section on “document class options”, find out what the default paper size is, and how
to change the paper size to a4.
If you are using TEXstudio the documentation can be found via:
Help menu > Packages help... > latex2e or
right-click on \documentclass > Open package documentation
8. Make a numbered list using the following code as a basis
\begin{enumerate}
\item first item
\end{enumerate}
9. Start a new section called ‘Science!’. Use inline math mode to describe the famous equation
e = mc2
, from Einstein’s mass-energy equivalence paper.

If you get stuck, talk to the person next to you, ask the instructor, or look at first_latex_solutions.tex.
3 Equations and citations and cross-references
For this exercise, continue to modify the first_latex_example.tex file.
1. Use the natbib package in combination with the physics.bib file to cite Einstein’s mass-energy
equivalence paper, which contains the equation e = mc2

. Use the ‘agu’ bibliography style. Refer

back to the slides for guidance on which commands to use, and where to use them.

1

2. Use an equation environment to typeset the Schrödinger equation:

i ̄h
∂
∂tΨ(r, t) = 
− ̄h
2
2μ
∇2 + V (r, t)

Ψ(r, t) (1)
Search online for how to typeset the various characters, and feel free to experiment typesetting
your own equations. Give the equation a label in order to refer back to it, then cite Schrödinger’s
1926 paper when you refer to this equation in the text - the citation is already in the physics.bib
file.