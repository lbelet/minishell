# Minishell

## Introduction

Le projet Minishell est une étape clé du cursus de l'école 42, visant à approfondir les connaissances en programmation système et à développer des compétences en création de shell Unix. L'objectif est de créer un shell minimaliste capable d'interpréter et d'exécuter des commandes, tout en gérant les signaux, les processus et les redirections.

## Fonctionnalités

Minishell comprend les fonctionnalités suivantes :
- Affichage d'un prompt personnalisable.
- Lecture et exécution de commandes simples.
- Gestion des chemins relatifs et absolus pour les commandes.
- Implémentation des commandes internes (built-ins) comme `cd`, `echo`, `pwd`, `export`, `unset`, `env` et `exit`.
- Redirections d'entrée et de sortie (`<`, `>`, `>>`).
- Gestion des pipes (`|`).
- Gestion des variables d'environnement.
- Gestion des signaux (Ctrl+C, Ctrl+D, Ctrl+\).

## Compétences Techniques

Ce projet permet de développer et de renforcer les compétences suivantes :
- **Programmation en C** : Écriture de code en langage C conforme aux normes de l'école 42.
- **Gestion des processus** : Utilisation des appels système pour créer et gérer des processus avec `fork()`, `execve()`, `waitpid()`, etc.
- **Manipulation des fichiers** : Gestion des descripteurs de fichiers et redirections avec `dup2()`, `pipe()`, etc.
- **Gestion des signaux** : Implémentation de la gestion des signaux pour une interruption propre et une utilisation interactive.
- **Analyse et parsing** : Analyse lexicale et syntaxique des lignes de commande pour une interprétation correcte.
- **Allocation dynamique** : Utilisation efficace de la mémoire dynamique avec `malloc()`, `free()`, tout en évitant les fuites de mémoire.

## Autres Compétences

En plus des compétences techniques, ce projet aide à développer :
- **Résolution de problèmes** : Analyser et résoudre des problèmes complexes liés à l'exécution des commandes et à la gestion des processus.
- **Travail en équipe** : Collaboration avec d'autres étudiants pour échanger des idées, réviser du code, et résoudre des bugs.
- **Gestion du temps** : Planification et organisation pour respecter les délais de projet.
- **Adaptabilité** : Apprentissage et adaptation rapide aux nouvelles exigences et défis techniques.

## Prérequis

Avant de commencer, assurez-vous d'avoir les éléments suivants installés sur votre machine :

- Un système d'exploitation Unix (Linux ou macOS)
- [GNU Make](https://www.gnu.org/software/make/)
- [GCC](https://gcc.gnu.org/) ou un autre compilateur C compatible

## Installation et Lancement

Pour compiler et exécuter Minishell, suivez ces étapes :

1. Clonez le dépôt :
   ```bash
   git clone https://github.com/lbelet/minishell.git
   cd minishell
2. Lancer le projet :
   ```bash
   make
   ./minishell
3. Exemple de commandes :
   ```bash
   minishell> echo Hello, World!
   minishell> cd ..
   minishell> pwd
   minishell> ls -l | grep minishell > output.txt
