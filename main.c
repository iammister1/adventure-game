#include <stdio.h>
#include <string.h>

void waitForEnter() {
    printf("\n(Press ENTER to continue...)\n");
    while (getchar() != '\n');
        getchar();
    }

int main() {
    char name[50];
    char choice[10];


    printf("Welcome, player! What is your name?\n");
    scanf("%49s", name);

    printf("Welcome to the game, %s\n", name);

    waitForEnter();

    printf("THE GLOOMY NIGHT\n");

    printf("You woke up to the sound of a loud BANG outside your room. What do you do?\n");
    printf("(1): Go check what that sound was\n");
    printf("(2): Stay in your room and go back to sleep.\n");

    scanf("%9s", choice);

    // Route 1
    if (strcmp(choice, "1") == 0)  { 
        printf("You exit your room. You check around downstairs.\n");
        waitForEnter();
        printf("As you enter the dark room, you spot a figure in front of you, glooming towards you with an unsettling vibe.\n");
        waitForEnter();
        printf("You can barely make it out as a human figure, being so far away in the dark of the night.\n");
        printf("What do you do?\n");
        printf("(1): Approach the figure\n");
        printf("(2): Walk Away Slowly\n");
        printf("(3): RUN AWAY QUICKLY\n");

        scanf("%9s", choice);

        //Route 1.1

        if (strcmp(choice, "1") == 0) {
            printf("You slowly approach the figure, wondering what it's searching for.\n");
            waitForEnter();
            printf("As you approach it, you vision starts to fade, you mind getting blurry and the image of the figure changing.");
            waitForEnter();
            printf("The figure starts to shape into a tall, dark being. You notice it's long, grey teeth on its mouth, it's expression changing when it see's you.");
            waitForEnter();
            printf("Your fear increases as it lunges towards you, pushing you to the ground with brute force. It licks it's lips... CHOMP\n");
            printf("YOU DIED\n");
            printf("You got... the BAD ending");
            waitForEnter();
        }
        // Route 1.2
        else if (strcmp(choice, "2") == 0)
        {
            printf("You tread lightly towards the end of the hall.");
            waitForEnter();
            printf("You wondered, how did he get in? What was he doing in your house?");
            waitForEnter();
            printf("The figure watches, it's eyes lingering at your escape.");
            waitForEnter();
            printf("As you continue to walk backwards, the figure seems to not get smaller, but bigger instead.");
            waitForEnter();
            printf("%49s... it whispers", name);
            waitForEnter();
            printf("You gasp, as you jolt up in your bed. Your back at where the story started. A infinite loop, it seems.");
            waitForEnter();
            printf("You got... the LOOP ending");
            waitForEnter();
        }
        //Route 1.3
        else if (strcmp(choice, "3") == 0) {
            printf("You bolt for the exit. The figure taking notice, chasing after you. Startled you trip on your foot while running. The figure catching up.");
            waitForEnter();
            printf("Looming over you, it speaks.");
            waitForEnter();
            printf("'%49s.. your time has come...' it speaks in a gloomy voice as it reaches it's hand out in front of you.", name);
            waitForEnter();
            printf("What does it mean? What will you do?\n");
            printf("(1): Accept the offer\n");
            printf("(2): Decline the offer\n");

            scanf("%9s", choice);

            //Route 1.3.1

            if (strcmp(choice, "1") == 0)
            {
                printf("You connect your hand with his, forming a handshake.");
                waitForEnter();
                printf("A rift between dimensions appears. The figure helps you into it and you get sent off through dimensions\n");
                waitForEnter();
                printf("You got... the TRUE ending\n");
                waitForEnter();
                printf("thanks for playing my crap game ill probably make another one of these in the future maybe a sequel to this one.");
                waitForEnter();
            }
            //Route 1.3.2

            if (strcmp(choice, "2") == 0)
            {
                printf("You just sit there, not moving a muscle, scared to make interaction.");
                waitForEnter();
                printf("The figure sees this and laughs.");
                waitForEnter();
                printf("'You think you have a choice?' it booms.");
                waitForEnter();
                printf("A rift between dimensions appears. The figure helps you into it and you get sent off through dimensions\n");
                waitForEnter();
                printf("You got.. the DECLINE ending");
                waitForEnter();
            }
            
            

        }
        
    } 
    //Route 2
    else if (strcmp(choice, "2") == 0)
    {
        printf("You stay in your room and go back to sleep.\n");
        waitForEnter();
        printf("You continue your normal life making normal choices and connecting with normal people just like your normal self");
        waitForEnter();
        printf("You got... the NORMAL ending");
        waitForEnter();
    }
    

}
