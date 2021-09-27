//
// Created by andilyliao on 16-11-15.
//
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Role {
    string name;
    int n;
};
int freadfwrite()
{
    Role* role1s=(Role*)malloc(sizeof(Role));
    role1s[0].name="root";
    role1s[0].n=1;
    FILE *fp = fopen("/home/wy/CLionProjects/test/aa.txt", "w");
    if (fp == NULL) {
        perror("Open file recfile");
        exit(1);
    }
    fwrite(&role1s[0], sizeof(struct Role), 1, fp);
    fclose(fp);

    struct Role role[2];
    FILE *fp1 = fopen("/home/wy/CLionProjects/test/aa.txt", "r");
    if (fp1 == NULL) {
        perror("Open file recfile");
        exit(1);
    }
    fread(role, sizeof(struct Role), 1, fp1);
    cout<<"Name1: "<<role[0].name<<" Age1: "<<role[0].n<<endl;
    //cout<<"Name2: "<<array1[1].name<<" Age2: "<<array1[1].age<<endl;
    fclose(fp1);

    return 0;
}
