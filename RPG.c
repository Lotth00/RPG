#include <stdio.h>
#include <windows.h> // Para Sleep

int main ()
{
    const verdadeiro = 1;
    const falso = 0;

    int jogo_ativo = verdadeiro;
    int sala_atual = 1;

    // ESCOLHAS DO JOGADOR
    int opcao, opcao2, opcao3, pintura_menorie = falso, feliz;

    Sleep(2000);
    printf ("----- MUNDO DOS PESADELOS -----\n");
    printf ("\n Voce acorda em sua cama, ou oque pensava ser ate que sentiu o tecido aspero machucar sua pele.\n Seu corpo ousa se levantar enquanto voce olha para um lugar que nunca viu antes, um quarto que\n a principio era escuro e abafado.\n\n Foi dificil acustumar seus olhos com a escuridao, porem logo foi possivel ver oque havia em sua\n volta. Alem da cama em baixo de suas pernas, ha uma pequena comoda, que talvez fosse cair se\n fosse tocada. No lado aposto dessa mesma comoda havia uma porta que se misturava com o ambiente\n e algumas pinturas, mas apenas uma chamou a sua atensao.");
    /*Sleep(30000);*/

    char nome [50];
    printf ("\n\n Qual era o seu nome mesmo? ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf ("\n Certo... Sim, esse era seu nome.\n");

    while (jogo_ativo == verdadeiro)
    {
        switch (sala_atual)
        {
            // QUARTO
            case 1:
                Sleep(2000);
                printf ("\n Voce olha em volta. Oque voce faz?\n 1. Deitar na cama novamente e dormir.\n 2. Olhar em baixo da cama.\n 3. Verificar a porta.\n 4. Olhar a pintura chamativa.\n 5. Verificar a comoda.\n\n ");
                scanf ("%d", &opcao);

                // QUARTO - ESCOLHAS
                switch (opcao)
                {
                    // MORTE
                    case 1:
                        printf ("\n Voce se deita na cama novamente.");
                        Sleep(2000);
                        printf ("\n Voce tenta dormir.");
                        Sleep(2000);
                        printf ("\n Voce tenta dormir de novo.");
                        Sleep(2000);
                        printf ("\n Voce tenta dormir de novo pela segunda vez.");
                        Sleep(3000);
                        printf ("\n Voce desiste. Eh impossivel dormir nessa cama, porque voce sequer tentou?");
                        Sleep(6000);
                        printf ("\n\n Voce deveria ter se levantado, mas quando voce percebeu, voce nao podia sequer levantar um musculo.");
                        printf ("\n Seu corpo estava colado na cama, se afundando mais e mais.\n Um dia, alguem vai acordar nessa cama sem nem perceber que ha um corpo preso nela.");

                        Sleep(13000);
                        printf ("\n\n Parabens, voce morreu!");
                        jogo_ativo = falso;

                    break;

                    case 2:
                        printf ("\n Voce se abaixa com o intuito de olhar embaixo da cama, a escuridao torna dificil de ver oque havia\n naquele lugar. Voce toma alguns segundos para seus olhos se acustumarem...");
                        Sleep(8000);
                        printf ("\n\n Quando seus olhos finalmente se acustumam com a escuridao que havia em baixo da cama, seus\n olhos encontram outros olhos.");
                        Sleep(8000);
                        printf ("\n\n E mais olhos.");
                        Sleep(2000);
                        printf ("\n MAIS OLHOS.");
                        Sleep(2000);
                        printf ("\n\n Talves fosse uma mah ideia olhar em baixo da cama quando sentiu seus olhos pularem de suas cavidades.");
                        Sleep(7000);
                        printf ("\n\n Voce podia ver seu pescoso de uma maneira que nao queria ver e com um instinto voce piscou suas palpebras.");
                        Sleep(7000);
                        printf ("\n\n Voce sentiu a carne que segurava suas orbitas rasgar. O sangue sujar suas bochechas...");

                        Sleep(9000);
                        printf ("\n\n Parabens, voce morreu!");
                        jogo_ativo = falso;

                    break;

                    case 3:
                        if (feliz == verdadeiro)
                        {
                            printf ("\n Voce vai ate a porta e tenta abrir ela.");


                        }

                        else if (feliz == falso)
                        {


                        } else {

                            printf ("\n Voce vai ate a porta e tenta abrir ela.");
                            Sleep(3000);
                            printf ("\n ela esta fechada.");
                        }

                    break;

                    case 4:
                        if (pintura_menorie == falso)
                        {
                            printf ("\n Voce vai ate a pintura. Seu olhar percore pela imagem de uma garota bela e elegante se\n nao fosse pelo sangue em suas maos.");
                            Sleep(7000);
                            printf ("\n\n Voce olha para ela mais um pouco, atraido pelo quanto ela eh bela.");
                            Sleep(6000);
                            printf ("\n\n Voce olha para ela um pouco mais.");
                            Sleep(6000);
                            printf ("\n\n Voce se sente estranho, talvez fosse uma mah ideia ter ficado olhando para ela\n assim que a garota se moveu.");
                            Sleep(7000);
                            printf ("\n\n ...");
                            Sleep(5000);
                            printf ("\n\n A garota olha para voce.");
                            Sleep(3000);
                            printf ("\n\n Lagrimas saem de seus olhos de tinta. Ela abre a boca e palavras aparecem na pintura.\n - Eu deveria existir? voce gosta do que ve? - Ela pergunta.");
                            Sleep(7000);
                            printf ("\n\n Oque voce responde? \n 1. 'Eu... eu nao sei. Me deixe sair!'\n 2. 'O que importa nao eh o que eu vejo, e sim o que voce sente.'\n 3. 'Voce foi feita para ser observada, nao para estar viva.'\n\n ");
                            scanf ("%d", &opcao2);

                            switch (opcao2)
                            {
                                case 1:

                                    printf ("\n - Eu... eu nao sei. Me deixe sair! - Voce diz com a voz tremula. Definitivamente uma pintura\n nao deveria se mover.\n");
                                    Sleep (6000);
                                    printf ("\n A pintura se move em desgosto, voce tem a impressao que ela vai sair da pintura. Suas lagrimas\n diminuem, seu rosto lentamente se contorcendo em odio.\n");
                                    Sleep (7000);
                                    printf ("\n As palavras mudam para - Me responda -\n");

                                    do
                                    {
                                        printf ("\n Oque voce diz a seguir?\n 1. 'Voce eh so tinta. Voce nao devia existir.'\n 2. 'Voce eh so tinta. Mas... mesmo tinta pode ser bela.'\n\n ");
                                        scanf ("%d", &opcao3);

                                        if (opcao3 < 0 || opcao3 > 2)
                                        {
                                            printf ("\n ----- A escolha de outras opcoes eh impossivel -----\n");
                                        }

                                    } while (opcao3 < 0 || opcao3 > 2);

                                    if (opcao3 == 1)
                                    {
                                        printf ("\n - Voce eh so tinta. Voce nao deveria existir - Voce diz.\n");
                                        Sleep(6000);
                                        printf ("\n A pintura antes chorona, agora ainda mais chorona. As maos da garota cobriram o proprio rosto.\n O quadro transbordava lentamente tinta para fora.\n");
                                        Sleep(7000);
                                        printf ("\n - Va embora... Va embora... - As letras emitem sons tristes.\n");
                                        Sleep(7000);
                                        printf ("\n A pintura esta em uma depressao profunda. Nao ha nada oque fazer, entao voce se afasta. \n");

                                        feliz = falso;
                                        pintura_menorie = verdadeiro;

                                    }

                                    else if (opcao3 == 2)
                                    {
                                        printf("\n As palavras se apagam da pintura, e por um momento o silencio eh total.\n");
                                        Sleep(5000);
                                        printf("\n De repente, o quadro comeca a chorar tinta negra.\n");
                                        Sleep(6000);
                                        printf("\n A garota na pintura abre a boca numa expressao estranha. Seu olhar era petrificante.\n");
                                        Sleep(5000);
                                        printf("\n\n - Apenas bela e apenas tinta... Bela e Bela, porque voce tambem nao se torna bela? - surge escrito na pintura.\n");
                                        Sleep(6000);
                                        printf("\n Antes de poder se afastar, a tinta pega seus pes, te agarra e te puxa.\n");
                                        Sleep(5000);
                                        printf("\n Voce fecha os olhos... E quando os abre a garota esta ao seu lado.\n");
                                        Sleep(5000);

                                        printf("\n Parabens. Uma nova pintura foi nomeada como: Bela e %s\n", nome);
                                        jogo_ativo = falso;

                                    }

                                break;

                                case 2:
                                    printf ("\n - O que importa nao eh o que eu vejo, e sim o que voce sente - Voce diz com calma,\n escondendo a ansiedade da sua voz.\n");
                                    Sleep (5000);
                                    printf ("\n A pintura te olha com um brilho em seus olhos de tinta. Ela se aproxima, parecia que\n ela iria sair da pintura com aquele sorriso belissimo.\n");
                                    Sleep (7000);
                                    printf ("\n Ela esta tao... tao feliz que voce pode ver suas maos sairem da pintura, enquanto\n ao mesmo tempo, grotescas ondas de tinta caindo do quadro da pintura.\n");
                                    Sleep (8000);
                                    printf ("\n - Sim... Sim.. estou viva, sim... Estou tao viva quanto voce deveria estar vivo.\n");
                                    Sleep (6000);
                                    printf ("\n Voce tentou se afastar, mas a tinta havia pego seus pes. As maos que escorriam tinta\n fresca estavam agora tocando seus ombros.\n");
                                    Sleep (8000);
                                    printf ("\n Voce sentiu a garota de tinta te abracar, mas em um instante...\n");
                                    Sleep (4000);
                                    printf ("\n ?");
                                    Sleep (2000);
                                    printf ("\n ??");
                                    Sleep (2000);
                                    printf ("\n ???\n");
                                    Sleep (4000);
                                    printf ("\n Voce ve a garota em sua frente, ela nao eh feita de tinta, nao mais.\n");
                                    Sleep (5000);
                                    printf ("\n Voce olha para si mesmo e ve que seu corpo, um dia feito de carne, agora eh feito\n de tinta\n");
                                    Sleep (6000);
                                    printf ("\n Parabens. Uma nova pintura foi nomeada como: %s", nome);

                                    jogo_ativo = falso;

                                break;

                                case 3:
                                    printf ("\n - Voce foi feita para ser observada, nao para estar viva - Voce diz com certa relutancia.\n");
                                    Sleep (5000);
                                    printf ("\n A garota abaixa o olhar, suas lagrimas escorrendo com mais graciosidade em seu rosto.\n");
                                    Sleep (5000);
                                    printf ("\n - Ah sim... Claro... Como nao havia pensado nisso? - As palavras surgem lentamente.\n");
                                    Sleep (5000);
                                    printf ("\n - Que incrivel... Pelo menos uma pessoa falando a verdade para mim - As palavras mudam\n no quadro conforme um sorriso se formava em seu belissimo rosto.\n");
                                    Sleep (7000);
                                    printf ("\n - Voce deveria ter uma recompensa... Porque nao olha aquela porta? - Entao, seu olhar\n indo para a porta, notando como uma luz que estranha vinha dela.\n");
                                    Sleep (6000);
                                    printf ("\n Voce olha novamente para a pintura, mas a garota nao esta mais la, restando apenas um\n vazio no cenario do quadro.\n");
                                    Sleep (5000);
                                    printf ("\n Voce se afasta da pintura.\n");

                                    feliz = verdadeiro;
                                    pintura_menorie = verdadeiro;

                                break;
                            }
                        }

                        else if (pintura_menorie == verdadeiro)
                        {
                            if (feliz = verdadeiro)
                            {
                              printf ("\n A garota nao esta mais no quadro. Nao ha mais nada oque fazer. Entao voce se afasta da pintura vazia.\n");
                            }

                            else if (feliz = falso)
                            {
                                printf ("\n A garota ainda esta chorando. Voce se sente culpado e nao ousa se aproximar novamente.");
                            }
                        }

                    break;

                    case 5:

                    break;
                }

            break;
        }
    }

        Sleep(5000);
        printf ("\n\n----- O JOGO TERMINOU -----\n");

    return 0;
}
