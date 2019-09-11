//
//  main.c
//  triangle lab
//
//  Created by Pegg, Andrew on 9/9/19.
//  Copyright © 2019 Pegg, Andrew. All rights reserved.
//

#include <stdio.h>
#include<math.h>
struct math
{
    long int triangles;
    float a;
    float b;
    float hyp;
    
    
    
}a;
int main()
    {
        
        puts("enter number of triangles");
        scanf("%ld", &a.triangles);
        for(a.triangles; a.triangles>0;a.triangles--)
        {
            printf("enter side lenght one\n");
            scanf("%f", & a.a );
            printf("enter side lenght two\n");
            scanf("%f",&a.b);
            a.hyp = sqrt((a.a*a.a)+(a.b*a.b));
            printf("the awnser is %f\n",a.hyp);
            
        }
    }

