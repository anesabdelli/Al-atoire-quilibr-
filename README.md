# AléatoireÉquilibré

AléatoireÉquilibré est un projet qui explore la génération de nombres aléatoires équilibrés à l'aide de processus multiples sur deux machines communicantes. Ce projet combine sockets, mémoire partagée et sémaphores pour évaluer l'équilibrage des nombres aléatoires générés.

## Fonctionnalités

- Génération de nombres aléatoires avec une distribution uniforme.
- Utilisation de plusieurs processus (à l'aide de `fork`) pour paralléliser la génération.
- Communication client-serveur via sockets.
- Mémoire partagée pour stocker les données globales dans chaque machine.
- Fusion des résultats et calcul de l'équilibrage sur le serveur.
- Sécurisation des accès avec des sémaphores.

## Prérequis

- Linux ou tout système supportant les sockets et la mémoire partagée.
- Compilateur C (comme GCC).
- Bibliothèques standards : `<stdio.h>`, `<stdlib.h>`, `<unistd.h>`, `<sys/socket.h>`, `<netinet/in.h>`, `<sys/mman.h>`, `<semaphore.h>`.

## Installation

1. Clonez le dépôt :
   ```bash
   git clone https://github.com/votreutilisateur/aleatoireequilibre.git
   cd aleatoireequilibre
   ```
2. Compilez le serveur et le client :
   ```bash
   gcc -o serveur serveur.c -lpthread
   gcc -o client client.c -lpthread
   ```

## Utilisation

1. Lancez le serveur :
   ```bash
   ./serveur
   ```
2. Lancez le client (depuis une autre machine ou la même) :
   ```bash
   ./client
   ```

Le serveur collectera les données des différents clients, fusionnera les tableaux et analysera l'équilibrage des nombres aléatoires générés.

## Structure du projet

- `serveur.c` : Gère la réception des données des clients, fusionne les tableaux et analyse les résultats.
- `client.c` : Gère la génération locale des nombres aléatoires et envoie les résultats au serveur.
- `README.md` : Documentation du projet.

## Contributions

Les contributions sont les bienvenues. Veuillez soumettre une pull request avec une description claire des changements apportés.

## Licence

Ce projet est sous licence MIT. Voir le fichier `LICENSE` pour plus de détails.
