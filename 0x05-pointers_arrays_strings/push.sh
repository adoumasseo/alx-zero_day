#!/bin/bash


# Demande à l'utilisateur d'entrer un message de commit
read -p "Entrez le message de commit : " commit_message

# Exécute les commandes git en utilisant les variables d'environnement
git add .
git commit -m "$commit_message"
git push https://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@github.com/adoumasseo/alx-low_level_programming.git
