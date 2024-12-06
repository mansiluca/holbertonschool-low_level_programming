# Projet de Programmation Bas Niveau - File I/O

## Description
Ce projet fait partie du cursus de l'école Holberton et se concentre sur les opérations d'entrée/sortie de fichiers en langage C. Vous apprendrez à manipuler des fichiers, à lire et écrire des données, et à gérer les erreurs associées.

## Contenu
- `0-read_textfile.c` : Lit un fichier texte et affiche son contenu sur la sortie standard.
- `1-create_file.c` : Crée un fichier et y écrit du texte.
- `2-append_text_to_file.c` : Ajoute du texte à la fin d'un fichier existant.
- `3-cp.c` : Programme qui copie le contenu d'un fichier vers un autre.

## Prérequis
- Connaissance de base du langage C.
- Compréhension des concepts de fichiers et de flux en C.

## Compilation
Pour compiler les fichiers, utilisez `gcc` :
```sh
gcc -Wall -Werror -Wextra -pedantic <nom_du_fichier>.c -o <nom_du_programme>
```

## Utilisation
### Lire un fichier texte
```sh
./<nom_du_programme> <nom_du_fichier>
```

### Créer un fichier et y écrire du texte
```sh
./<nom_du_programme> <nom_du_fichier> <texte_à_écrire>
```

### Ajouter du texte à un fichier existant
```sh
./<nom_du_programme> <nom_du_fichier> <texte_à_ajouter>
```

### Copier le contenu d'un fichier vers un autre
```sh
./<nom_du_programme> <fichier_source> <fichier_destination>
```

## Auteur
Ce projet a été réalisé par Luca dans le cadre du programme Holberton School.
