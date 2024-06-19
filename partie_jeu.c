#include "partie_jeu.h"

#define LONGUEUR_MOT 100
#define MOT_MAX 100

// Structure pour stocker les informations des joueurs
struct Joueur
{
    char pseudo[100];
    char promotion[100];
    int motsReussis;
    int motsEchoues;
    int tempsEcoule;
    // Autres informations des joueurs
};



//###############################  FONCTION POUR DÉMARRER LE JEU  ###########################################
void demarrer()
{
    int rejouer_partie = 1;
    char mots[MOT_MAX][LONGUEUR_MOT];
    while (rejouer_partie)
    {
        // Récupérer le nombre de joueurs et le nombre de mots
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\n\t\t\t\t\t\t\t\t\*#####################****LANCEMENT****####################*\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                   Demarrage de la partie...              #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
        // Attendre 5 secondes
        sleep(5);

        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\n\t\t\t\t\t\t\t\t\*###########**** Informations des joueurs: ****############*\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#          Entrez le nombre de joueurs (Minimum 2) :       #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
        int nombreJoueurs;
        scanf("%d", &nombreJoueurs);
        struct Joueur joueurs[nombreJoueurs];
        while (nombreJoueurs < 2 )
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t\t\t\t\*###############======== Attention ========################*\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
            printf("\n\t\t\t\t\t\t\t\t\# Le nombre de joueurs doit etre superieur ou egal a 2     #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                   Veuillez réessayer :                   #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
            printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
            scanf("%d", &nombreJoueurs);
        }
        int nombreMots;
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\n\t\t\t\t\t\t\t\t\*########======= Informations de la partie: =======#########*\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#           Entrez le nombre de mots par joueur :          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
        printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
        scanf("%d", &nombreMots);

        // Récupérer les informations de chaque joueur
        for (int joueurCourant = 0; joueurCourant < nombreJoueurs; joueurCourant++)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t\t\t\t\*########======= Informations des joueurs: =======#########*\n");
            printf("\n\t\t\t\t\t\t\t\t\#        joueur %d :                                       \n", joueurCourant + 1);
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#        Pseudo :                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
            scanf("%s", joueurs[joueurCourant].pseudo);
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t\t\t\t\*########======= Informations des joueurs: =======#########*\n");
            printf("\n\t\t\t\t\t\t\t\t\#        joueur %d :                                       \n", joueurCourant + 1);
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#        promotion :                                       \n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
            scanf("%s", joueurs[joueurCourant].promotion);
        }

        for (int i = 0; i < nombreJoueurs; i++)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t\t\t\t\*########======= Informations des joueurs: =======#########*\n");
            printf("\n\t\t\t\t\t\t\t\t\#        joueur %d :                                       \n", i+ 1);
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#        Pseudo : %s                                       \n", joueurs[i].pseudo);
            printf("\n\t\t\t\t\t\t\t\t\#        Promotion : %s                                    \n", joueurs[i].promotion);
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
            sleep(3);
        }


        for (int joueurCourant = 0; joueurCourant < nombreJoueurs; joueurCourant++)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t\t\t\t\*############======== Appel d'un joueur =======############*\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#        C'est le tour de %s (promotion : %s) !            \n", joueurs[joueurCourant].pseudo, joueurs[joueurCourant].promotion);
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
            sleep(3);
            int i = 0;
            FILE *fichier = fopen("mots.txt", "r");// Ouvrir le fichier contenant les mots
            if (fichier == NULL)
            {
                printf("Erreur à l'ouverture du fichier\n");
                free(joueurs);
                return 1;
            }
            rewind(fichier);
            while (nombreMots < MOT_MAX && fscanf(fichier,"%s",mots[nombreMots] == 1))
            {
                nombreMots++;
            }
            fclose(fichier);
            int pret;
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t\t\t\t\*################======= Position!!! =======###############*\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#        %s, etes vous pret ? [1/0] :                      \n", joueurs[joueurCourant].pseudo);
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
            printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
            scanf("%d",&pret);
            if (pret == 0)
            {
                //passer au joueur suivant
                continue;
            }
            for (int contage = 5; contage > 0; contage --)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t\t\t\t\*#############======= Compte a rebours =======#############*\n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
                printf("\n\t\t\t\t\t\t\t\t\#        Le jeu commence dans %d...                        \n",contage);
                printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
                printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
                sleep(1);
            }
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t\t\t\t\*###############========== Depart ==========###############*\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
            printf("\n\t\t\t\t\t\t\t\t\#        Commencez !!!                                     #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
            printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
            sleep(1);
            time_t debutchrono = time(NULL);

            for (int motcourant = 0; motcourant < nombreMots; motcourant++)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n");
                printf("\n\t\t\t\t\t\t\t\t\*##############========== Tapez... ==========##############*\n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
                printf("\n\t\t\t\t\t\t\t\t\#   Mot a saisir : %s                                      \n", mots[motcourant]);
                printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
                printf("\n\t\t\t\t\t\t\t\t\#                                                          \n");
                printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
                char motSaisis[LONGUEUR_MOT];
                scanf("%s",motSaisis);
                if (strcmp(motSaisis,mots[motcourant]) == 0)
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n");
                    printf("\n\t\t\t\t\t\t\t\t\*##############======= Verification =======################*\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                       Mot correct !                      #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
                    printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
                    printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
                    sleep(2);
                    joueurs[joueurCourant].motsReussis ++;
                }
                else
                {
                    system("cls");
                    printf("\n\n\n\n\n\n\n\n\n\n");
                    printf("\033[5;31mMot incorrect !!\033[0m\n");
                    sleep(2);
                    joueurs[joueurCourant].motsEchoues ++;
                    for (int essai = 1; essai < 3; essai)
                    {

                        printf("\n\n\n\n\n\n\n\n\n\n");
                        printf("\n\t\t\t\t\t\t\t\t\*########======= Informations des joueurs: =======#########*\n");
                        printf("\n\t\t\t\t\t\t\t\t\#   Saisissez le mot a nouveau :                           #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#   Mot a saisir : %s                                      #\n", mots[motcourant]);
                        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
                        printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
                        printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
                        scanf("%s",motSaisis);
                        if (strcmp(motSaisis,mots[motcourant]) == 0)
                        {
                            system("cls");
                            printf("\n\n\n\n\n\n\n\n\n\n");
                            printf("\n\t\t\t\t\t\t\t\t\*########======= Informations des joueurs: =======#########*\n");
                            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
                            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
                            printf("\n\t\t\t\t\t\t\t\t\#                       Mot correct !                      #\n");
                            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
                            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
                            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
                            printf("\n\t\t\t\t\t\t\t\t\############################################################\n");
                            sleep(2);
                            joueurs[joueurCourant].motsReussis ++;
                        }
                        else
                        {
                            system("cls");
                            printf("\n\n\n\n\n\n\n\n\n\n");
                            printf("\033[5;31mMot incorrect !!\033[0m\n");
                            sleep(2);
                            joueurs[joueurCourant].motsEchoues ++;
                        }
                    }

                }


            }
            // Calculer le temps écoulé pour ce joueur
            time_t finChrono = time(NULL);
            joueurs[joueurCourant].tempsEcoule = (int)(finChrono - debutchrono);
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t\t\t\t\t\*########======= Informations des joueurs: =======#########*\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                   Fin du tour de %s !                    #\n", joueurs[joueurCourant].pseudo);
            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
            printf("\n\t\t\t\t\t\t\t\t\#                                                          #\n");
            printf("\n\t\t\t\t\t\t\t\t\############################################################\n");

            continue;

        }

        int rejouer;
        printf("\n\033[5;31mVoulez-vous relancer une nouvelle partie ? (1 pour oui, 0 pour non) : \033[0m\n");
        scanf("%d", &rejouer);

        if (rejouer == 1)
        {
            // Relancer la partie depuis le début
        }
        else
        {
            printf("\033[5;31mMerci d'avoir joué ! À bientôt.\033[0m\n");
            sleep(3);
            return 0;
        }
    }
    return 0;
}

