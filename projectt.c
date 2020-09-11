#include<stdio.h>
#include<string.h>
#include<conio.h>
struct hospital_db
{
    char name[30];
    int  age;
    char gender[20];
    char occupation[30];
    char specialist[30];
    char blood_group[4];
    char religion[15];
    char address[40];
    char contact[25];
    char email[40];
};
int main()
{
    FILE *fp;
    int i;
    fp=fopen("hsptl.txt","r");
    int counter=0;
    char str[1000];

    while(fgets(str,1000,fp)!=NULL)
    {
        counter++;
    }
    printf("Counter: %d\n",counter);
    struct hospital_db s[counter];
    rewind(fp);
    char newline;
    for(i=0; i<counter; i++)
    {
        fscanf(fp,"%[^:]:%d:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]:%[^:]%c",s[i].name,&s[i].age,s[i].gender,s[i].occupation,s[i].specialist,s[i].blood_group,s[i].religion,s[i].address,s[i].contact,s[i].email,&newline);
    }
    for(i=0; i<counter; i++)
    {
        puts(s[i].name);
        printf("%d\n",s[i].age);
        puts(s[i].gender);
        puts(s[i].occupation);
        puts(s[i].specialist);
        puts(s[i].blood_group);
        puts(s[i].religion);
        puts(s[i].address);
        puts(s[i].contact);
        puts(s[i].email);
        printf("\n\n");


    }
    int n;
    while(1)
    {
        printf("         <<Information OF The Doctors>>\n\n");
        printf("Press 1 to see the  number of doctors.\n");
        printf("Press 2 to see the number of male doctors.\n");
        printf("Press 3 to see the number of female doctors.\n");
        printf("Press 4 to see the number of Internal_Medicine specialists & their info.\n");
        printf("press 5 to see the number of Cardiology specialists & their info .\n");
        printf("press 6 to see the number of Neurology specialists & their info. \n");
        printf("press 7 to see the number of Dermatology specialists & their info.\n");
        printf("press 8 to see the number of Dental specialists & their info.\n");
        printf("press 9 to see the number of General_surgery specialists & their info.\n");
        printf("press 10 to see the number of Neurosurgery specialists & their info.\n");
        printf("press 11 to see the number of Orthopedic and joint surgery specialists & their info.\n\n");
        printf("           <<Information Of The Nurses>>\n\n");
        printf("Press 12 to see the number of nurses.\n");
        printf("press 13 to see the number of Nurses in the Internal_Medicine department & their info.\n");
        printf("press 14 to see the number of Nurses in the Cardiology department & their info.\n");
        printf("press 15 to see the number of Nurses in the Neurology  department & their info.\n");
        printf("press 16 to see the number of Nurses in the Dermatology department & their info.\n");
        printf("press 17 to see the number of Nurses in the Dental department & their info.\n");
        printf("press 18 to see the number of Nurses in the General_surgery department & their info.\n");
        printf("press 19 to see the number of Nurses in the Neurosurgery department & their info.\n");
        printf("press 20 to see the number of Nurses in the Orthopedic department & their info.\n\n");
        printf("            <<Information Of The Patients>>\n\n");
        printf("press 21 to see the number of Patients.\n");
        printf("press 22 to see the number of Male Patients.\n");
        printf("press 23 to see the number of Female Patients.\n");
        printf("press 24 to see the number of Patients of Heart disease & their info.\n");
        printf("press 25 to see the number of Patients of Skin disease & their info.\n");
        printf("press 26 to see the number of Patients of Diabetes & their info.\n");
        printf("press 27 to see the number of Patients of Brain disease & their info.\n");
        printf("press 28 to see the number of Patients of Bone disease & their info.\n");
        printf("press 29 to see the number of Patients of Dengue fever & their info.\n");
        printf("press 30 to see the number of Patients of Malaria & their info.\n");
        printf("Press 00 to exit\n");
        scanf("%d",&n);
        fflush(stdin);
        if(n==1)
        {
            int num=0;
            char std[]="Doctor";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].occupation,std)==0)
                {
                    num++;
                }
            }
            printf("The number of doctors is %d\n",num);

        }
        else if(n==2)
        {
            int i,num=0;
            char str[]="M";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].gender,str)==0)
                {
                    num++;
                }
            }
            printf("The number of Male doctors is %d\n",num);
        }
        else if(n==3)
        {
            int i,num=0;
            char str[]="F";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].gender,str)==0)
                {
                    num++;
                }
            }
            printf("The number of Female doctors is %d\n",num);
        }
        else if(n==4)
        {
            int i,num=0;
            char sts[]="Internal_Medicine";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,sts)==0)
                {
                    num++;

                }
            }
            printf("The number of the Internal_Medicine specialists is %d\n and they are...\n\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,sts)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");

                }
            }

        }
        else if(n==5)
        {
            int i,num=0;
            char stc[]="Cardiology";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stc)==0)
                {
                    num++;
                }
            }
            printf("The number of cardiology specialists is %d\n and they are...\n\n",num);

            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stc)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");

                }
            }

        }
        else if(n==6)
        {
            int i,num=0;
            char stn[]="Neurology";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    num++;
                }
            }
            printf("The number of Neurology specialists is %d\n and they are...\n\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }
            }

        }
        else if(n==7)
        {
            int i,num=0;
            char stn[]="Dermatology";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    num++;
                }
            }
            printf("The number of Dermatology specialists is %d\n and they are...\n\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }
            }


        }
        else if(n==8)
        {
            int i,num=0;
            char stn[]="Dental";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    num++;
                }
            }
            printf("The number of Dental specialists is %d\n and they are...\n\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }
            }

        }
        else if(n==9)
        {
            int i,num=0;
            char stn[]="General_surgery";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    num++;
                }
            }
            printf("The number of General_surgery specialists is %d\n and they are...\n\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }
            }
        }
        else if(n==10)
        {
            int i,num=0;
            char stn[]="Neuro_surgery";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    num++;
                }
            }
            printf("The number of Neuro_surgery specialists is %d\n and they are...\n\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }
            }
        }
        else if(n==11)
        {
            int i,num=0;
            char stn[]="Orthopedic & joint surgery";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    num++;
                }
            }
            printf("The number of Orthopedic & joint surgery specialists is %d\n and they are...\n\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }
            }
        }
        else if(n==12)
        {
            int i,num=0;
            char stn[]="Nurse";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].occupation,stn)==0)
                {
                    num++;
                }
            }
            printf("The number of Nurses is %d\n",num);
        }
        else if(n==13)
        {
            int i,num=0;
            char sts[]="N_Internal_Medicine";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,sts)==0)
                {
                    num++;

                }
            }
            printf("The number of Nurses in the Internal_Medicine department is %d\n and they are...\n\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,sts)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");

                }
            }
        }
        else if(n==14)
        {
            int i,num=0;
            char stc[]="N_Cardiology";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stc)==0)
                {
                    num++;
                }
            }
            printf("The number of Nurses in the Cardiology department is %d\n and they are...\n\n",num);

            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stc)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");

                }
            }

        }
        else if(n==15)
        {
            int i,num=0;
            char stn[]="N_Neurology";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    num++;
                }
            }
            printf("The number of Nurses in the Neurology department is %d\n and they are...\n\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }
            }
        }
        else if(n==16)
        {
            int i,num=0;
            char stn[]="N_Dermatology";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    num++;
                }
            }
            printf("The number of Nurses in the Dermatology department is %d\n and they are...\n\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }
            }

        }
        else if(n==17)
        {
            int i,num=0;
            char stn[]="N_Dental";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    num++;
                }
            }
            printf("The number of Nurses in the Dental department is %d\n and they are...\n\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }
            }
        }
        else if(n==18)
        {
            int i,num=0;
            char stn[]="N_General_surgery";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    num++;
                }
            }
            printf("The number of Nurses in the General_surgery department is %d\n and they are...\n\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }
            }
        }
        else if(n==19)
        {
            int i,num=0;
            char stn[]="N_Neuro_surgery";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    num++;
                }
            }
            printf("The number of Nurses in the Neuro_surgery department is %d\n and they are...\n\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }
            }
        }
        else if(n==20)
        {
            int i,num=0;
            char stn[]="N_Orthopedic & joint surgery";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    num++;
                }
            }
            printf("The number of Nurses in the Orthopedic & joint surgery department is %d\n and they are...\n\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,stn)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }
            }
        }
        else if(n==21)
        {
            int i,num=0;
            char str[]="Patient";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].occupation,str)==0)
                {
                    num++;
                }
            }
            printf("The number of Patients is %d\n\n",num);
        }
        else if(n==22)
        {
            int i,num=0;
            char str[]="Male Patient";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].gender,str)==0)
                {
                    num++;
                }
            }
            printf("The number of Male Patients is %d\n\n",num);
        }
        else if(n==23)
        {
            int i,num=0;
            char str[]="Female Patient";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].gender,str)==0)
                {
                    num++;
                }
            }
            printf("The number of Female Patients is %d\n\n",num);
        }
        else if(n==24)
        {
            int i,num=0;
            char str[]="Heart disease";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,str)==0)
                {
                    num++;
                }
            }
            printf("The number of Patients of Heart disease is %d\n and they are...\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,str)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }

            }
        }
        else if(n==25)
        {
            int i,num=0;
            char str[]="Skin disease";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,str)==0)
                {
                    num++;
                }
            }
            printf("The number of Patients of Skin disease is %d\n and they are...\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,str)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }

            }
        }
        else if(n==26)
        {
            int i,num=0;
            char str[]="Diabetes";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,str)==0)
                {
                    num++;
                }
            }
            printf("The number of Patients of Diabetes is %d\n and they are...\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,str)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }

            }
        }
        else if(n==27)
        {
            int i,num=0;
            char str[]="Brain disease";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,str)==0)
                {
                    num++;
                }
            }
            printf("The number of Patients of Brain disease is %d\n and they are...\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,str)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }

            }
        }
        else if(n==28)
        {
            int i,num=0;
            char str[]="Bone disease";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,str)==0)
                {
                    num++;
                }
            }
            printf("The number of Patients of Bone disease is %d\n and they are...\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,str)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }

            }
        }
        else if(n==29)
        {
            int i,num=0;
            char str[]="Dengue fever";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,str)==0)
                {
                    num++;
                }
            }
            printf("The number of Patients of Dengue fever is %d\n and they are...\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,str)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }

            }
        }
        else if(n==30)
        {
            int i,num=0;
            char str[]="Malaria";
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,str)==0)
                {
                    num++;
                }
            }
            printf("The number of Patients of Malaria is %d\n and they are...\n",num);
            for(i=0; i<counter; i++)
            {
                if(strcmp(s[i].specialist,str)==0)
                {
                    puts(s[i].name);
                    printf("%d\n",s[i].age);
                    puts(s[i].gender);
                    puts(s[i].occupation);
                    puts(s[i].specialist);
                    puts(s[i].blood_group);
                    puts(s[i].religion);
                    puts(s[i].address);
                    puts(s[i].contact);
                    puts(s[i].email);
                    printf("\n\n");
                }

            }
        }
        else if(n==00)
        {
            break;
        }


    }
    fclose(fp);
    return 0;
}

