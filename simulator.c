#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <dos.h>
   
           ////    OPTICS VIRTUAL SIMULATOR    ////
int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, x5, x6, y6, y5, y2, x3, y3, x4, y4, dx, dy, k, p, x, y, i, h, x7, y7, x8, y8;
    int q, f, v, u, hi, ho, m1, m2, choice1, choice2, choice, o = 360, num;
    char *a = "C:\\MinGW\\mingw32\\lib";
    initgraph(&gd, &gm, a);
    outtextxy(250,20,"OPTICAL SIMULARTOR");
    printf("1. Mirror\n");
    printf("2. Convex Lens\n");
    printf("3. Concave Lens\n");
    printf("4. Prism\n");
    printf("5. Exit\n");
    printf("Choice:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("10. Concave Mirror\n");
        printf("20. Convex Mirror\n");
        printf("30. Exit\n");
        printf("Choice:\n");
        scanf("%d", &choice1);

        switch (choice1)
        {
        case 10:
            printf("enter the focal length of mirror :\n");
            scanf("%d", &h);
            printf("enter the distance of object from pole : \n");
            scanf("%d", &u);
            printf("enter the height of object(max. 45 units) : \n");
            scanf("%d", &ho);
            line(0, 250, 700, 250);
            arc(224, 250, 310, 50, 136);
            arc(224, 250, 310, 50, 136);
            outtextxy(360, 252, "O");
            outtextxy(360 - h, 252, "F");
            outtextxy(360 - 2 * h, 252, "C");
            setcolor(YELLOW);
            line(360 - u, 250, 360 - u, 250 - ho * 8 / 9);
            circle(360 - u, 250 - ho, ho / 9);
            u = u + 1;
            v = (u * h) / (u - h);
            hi = (ho * v) / u + 250;

            x1 = 360 - u;
            y1 = 250 - ho;
            x2 = 352;
            y2 = 250 - ho;
            dx = x2 - x1;
            dy = y2 - y1;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {

                putpixel(x1, y1, 2);
                x1 = x1 + 1;
                y1 = y1;
                p = p + 2 * abs(dy);
                delay(10);
            }
            if (h < u)
            {

                x3 = 352;
                y3 = 250 - ho;
                x4 = 360 - v;
                y4 = hi;
                dx = x3 - x4;
                dy = y3 - y4;
                p = 2 * dy - dx;
                for (k = 0; k < dx; k++)
                {
                    if (p < 0)
                    {
                        putpixel(x3, y3, 2);
                        x3 = x3 - 1;
                        y3 = y3;
                        p = p + 2 * abs(dy);
                        delay(10);
                    }
                    else
                    {
                        putpixel(x3, y3, 2);
                        x3 = x3 - 1;
                        y3 = y3 + 1;
                        p = p + 2 * abs(dy) - 2 * abs(dx);
                        delay(10);
                    }
                }
            }

            x6 = 360;
            y6 = 250;
            x5 = 360 - u;
            y5 = 250 - ho;
            dx = x6 - x5;
            dy = y6 - y5;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x5, y5, 2);
                    x5 = x5 + 1;
                    y5 = y5;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x5, y5, 2);
                    x5 = x5 + 1;
                    y5 = y5 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }
            x7 = 360;
            y7 = 250;
            x8 = 360 - v;
            y8 = hi;
            dx = x7 - x8;
            dy = y7 - y8;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x7, y7, 2);
                    x7 = x7 - 1;
                    y7 = y7;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x7, y7, 2);
                    x7 = x7 - 1;
                    y7 = y7 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }

            if (h > u)
            {

                x3 = 352;
                y3 = 250 - ho;
                x4 = 360 - v;
                y4 = hi;
                dx = x4 - x3;
                dy = y4 - y3;
                p = 2 * dy - dx;
                for (k = 0; k < dx; k++)
                {
                    if (p < 0)
                    {
                        putpixel(x3, y3, 2);
                        x3 = x3 + 1;
                        y3 = y3;
                        p = p + 2 * abs(dy);
                        delay(10);
                    }
                    else
                    {
                        putpixel(x3, y3, 2);
                        x3 = x3 + 1;
                        y3 = y3 - 1;
                        p = p + 2 * abs(dy) - 2 * abs(dx);
                        delay(10);
                    }
                }
                x7 = 360;
                y7 = 250;
                x8 = 360 - v;
                y8 = hi;
                dx = x8 - x7;
                dy = y8 - y7;
                p = 2 * dy - dx;
                for (k = 0; k < dx; k++)
                {
                    if (p < 0)
                    {
                        putpixel(x7, y7, 2);
                        x7 = x7 + 1;
                        y7 = y7;
                        p = p + 2 * abs(dy);
                        delay(10);
                    }
                    else
                    {
                        putpixel(x7, y7, 2);
                        x7 = x7 + 1;
                        y7 = y7 - 1;
                        p = p + 2 * abs(dy) - 2 * abs(dx);
                        delay(10);
                    }
                }
            }
            if (h > u)
            {
                setcolor(YELLOW);
                line(360 - v, 250, 360 - v, 250 - (250 - hi) * 8 / 9);
                circle(360 - v, hi, (250 - hi) / 9);

                outtextxy(200, 400, "Virtual ,Erect and Enlarged Image");
            }
            if (h < u)
            {
                setcolor(YELLOW);
                line(359 - v, 250, 359 - v, (hi - 250) * 8 / 9 + 250);
                circle(359 - v, hi, (hi - 250) / 9);
            }
            if (u > 2 * h)
            {
                outtextxy(200, 400, "Real, Inverted and Diminished Image");
            }
            if (2 * h > u && u > h)
            {
                outtextxy(200, 400, "Real, Inverted and Enlarged Image");
            }
            if (u == h)
            {
                outtextxy(200, 400, "Real, Inverted and Highly Enlarged Image");
            }
            if (u - 1 == 2 * h)
            {
                outtextxy(200, 400, "Real, Inverted and Same Sized Image");
            }
            getch();
            closegraph();

            break;
        case 20:
            printf("enter the value of focal length of mirror(max. 300 units) :\n");
            scanf("%d", &h);
            printf("enter the distance of object from pole(max. 350 units) : \n");
            scanf("%d", &u);
            printf("enter the height of object(max. 45 units) : \n");
            scanf("%d", &ho);

            line(0, 250, 700, 250);
            arc(494, 250, 130, 230, 136);
            arc(495, 250, 130, 230, 136);
            outtextxy(365, 252, "O");
            outtextxy(360 + h, 252, "F");
            outtextxy(360 + 2 * h, 252, "C");
            setcolor(YELLOW);
            line(360 - u, 250, 360 - u, 250 - ho * 8 / 9);
            circle(360 - u, 250 - ho, ho / 9);
            u = u + 1;
            v = (u * h) / (u + h);
            hi = 250 - (ho * v) / u;
            x1 = 360 - u;
            y1 = 250 - ho;
            x2 = 364;
            y2 = 250 - ho;
            dx = x2 - x1;
            dy = y2 - y1;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {

                putpixel(x1, y1, 2);
                x1 = x1 + 1;
                y1 = y1;
                p = p + 2 * abs(dy);
                delay(10);
            }
            x7 = 364;
            y7 = 250 - ho;
            x8 = 250;
            y8 = (hi + ho - 250) * 364 * 250 / (724 + v) + 250 - ho - (hi + ho - 250) * 364 / (724 + v);
            dx = x7 - x8;
            dy = y7 - y8;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x7, y7, 2);
                    x7 = x7 - 1;
                    y7 = y7;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x7, y7, 2);
                    x7 = x7 - 1;
                    y7 = y7 - 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }

            x6 = 360;
            y6 = 250;
            x5 = 360 - u;
            y5 = 250 - ho;
            dx = x6 - x5;
            dy = y6 - y5;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x5, y5, 2);
                    x5 = x5 + 1;
                    y5 = y5;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x5, y5, 2);
                    x5 = x5 + 1;
                    y5 = y5 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }
            x7 = 360;
            y7 = 250;
            x8 = 250;
            y8 = (250 - hi) * 360 * 250 / v + 250 - (250 - hi) * 360 / v;
            dx = x7 - x8;
            dy = y7 - y8;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x7, y7, 2);
                    x7 = x7 - 1;
                    y7 = y7;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x7, y7, 2);
                    x7 = x7 - 1;
                    y7 = y7 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }

            x7 = 364;
            y7 = 250 - ho;
            x8 = 360 + v;
            y8 = hi;
            dx = x8 - x7;
            dy = y8 - y7;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x7, y7, 2);
                    x7 = x7 + 1;
                    y7 = y7;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x7, y7, 2);
                    x7 = x7 + 1;
                    y7 = y7 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }

            x7 = 360;
            y7 = 250;
            x8 = 360 + v;
            y8 = hi;
            dx = x8 - x7;
            dy = y8 - y7;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x7, y7, 2);
                    x7 = x7 + 1;
                    y7 = y7;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x7, y7, 2);
                    x7 = x7 + 1;
                    y7 = y7 - 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }
            setcolor(YELLOW);
            line(360 + v, 250, 360 + v, 250 - (250 - hi) * 8 / 9);
            circle(360 + v, hi, (250 - hi) / 9);
            outtextxy(200, 400, "Virtual, Erect and Diminished Image");
            getch();
            closegraph();
            break;
        case 30:
            printf("\nBye\n");
            break;
        default:
            printf("\nInvalid Code\n");
        }
        break;
    case 2:
        printf("enter the value of focal length of the lens :");
        scanf("%d", &f);
        printf("enter the value of distance of object from the pole :");
        scanf("%d", &u);
        printf("enter the height of object and it would must be less than 45 cm : ");
        scanf("%d", &ho);
        u = u + 1;
        v = (u * f) / (u - f); //lens formula
        hi = (ho * v) / u;
        line(0, 250, 1000, 250);
        arc(300, 250, 310, 50, 90);
        arc(418, 250, 130, 230, 90);
        outtextxy(360 - f, 252, "F");
        outtextxy(360 - 2 * f, 252, "2F");
        outtextxy(360, 252, "O");
        outtextxy(360 + f, 252, "F");
        outtextxy(360 + 2 * f, 252, "2F");
        /* *********
							  convex lens all cases in form of graphic code written by prince raj
																								  ********/
        if (u - 1 > f && u != f + 1)
        {
            setcolor(YELLOW);
            line(360 - u, 250, 360 - u, 250 - ho);
            circle(360 - u, 255 - ho, 5);

            x1 = 360 - u;
            y1 = 255 - ho;
            x2 = 360;
            y2 = 255 - ho;
            dx = x2 - x1;
            dy = y2 - y1;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x1, y1, 2);
                    x1 = x1 + 1;
                    y1 = y1;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x1, y1, 2);
                    x1 = x1 + 1;
                    y1 = y1 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }

            x3 = 360;
            y3 = 255 - ho;
            x4 = 360 + v;
            y4 = 252 + hi;
            dx = x4 - x3;
            dy = y4 - y3;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x3, y3, 2);
                    x3 = x3 + 1;
                    y3 = y3;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x3, y3, 2);
                    x3 = x3 + 1;
                    y3 = y3 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }

            // code for line passing through center of curverture

            x6 = 360 + v;
            y6 = 252 + hi;
            x5 = 360 - u;
            y5 = 255 - ho;
            dx = x6 - x5;
            dy = y6 - y5;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x5, y5, 2);
                    x5 = x5 + 1;
                    y5 = y5;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x5, y5, 2);
                    x5 = x5 + 1;
                    y5 = y5 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }
            line(360 + v, 247 + hi, 360 + v, 252);
            circle(360 + v, 252 + hi, 5);
            if (u < 2 * f)
            {

                outtextxy(200, 400, "Real,Enlarge,inverted image");
            }
            else if (u > 2 * f && u != 2 * f + 1)
            {
                outtextxy(200, 400, "real,diminished,inverted image");
            }
            else if (2 * f + 1 == u)
            {
                outtextxy(200, 400, "real,equal and inverted image");
            }
        }
        // code when the object at the focal legth

        else if (u == f + 1)
        {
            setcolor(YELLOW);
            line(360 - u, 250, 360 - u, 250 - ho);
            circle(360 - u, 255 - ho, 5);

            // line pass up to lens
            x1 = 360 - u;
            y1 = 255 - ho;
            x2 = 360;
            y2 = 255 - ho;
            dx = x2 - x1;
            dy = y2 - y1;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x1, y1, 4);
                    x1 = x1 + 1;
                    y1 = y1;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x1, y1, 4);
                    x1 = x1 + 1;
                    y1 = y1 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }
            // line from lens to focus
            x3 = 360;
            y3 = 255 - ho;
            x4 = 360 + f;
            y4 = 252;
            dx = x4 - x3;
            dy = y4 - y3;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x3, y3, 4);
                    x3 = x3 + 1;
                    y3 = y3;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x3, y3, 4);
                    x3 = x3 + 1;
                    y3 = y3 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }
            x6 = 580 - ho;
            y6 = (255 - ho) + ((ho - 3) * (220 - ho)) / u;
            x5 = 360 + f;
            y5 = 252;
            dx = x6 - x5;
            dy = y6 - y5;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x5, y5, 4);
                    x5 = x5 + 1;
                    y5 = y5;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x5, y5, 4);
                    x5 = x5 + 1;
                    y5 = y5 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }

            x6 = 360;
            y6 = 252;
            x5 = 360 - u;
            y5 = 255 - ho;
            dx = x6 - x5;
            dy = y6 - y5;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x5, y5, 4);
                    x5 = x5 + 1;
                    y5 = y5;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x5, y5, 4);
                    x5 = x5 + 1;
                    y5 = y5 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }
            x5 = 360;
            y5 = 252;
            x6 = 575 - ho;
            y6 = 252 + ((ho - 3) * (215 - ho)) / u;
            dx = x6 - x5;
            dy = y6 - y5;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x5, y5, 4);
                    x5 = x5 + 1;
                    y5 = y5;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x5, y5, 4);
                    x5 = x5 + 1;
                    y5 = y5 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }

            outtextxy(200, 400, "object at F image at infnity");
        }

        // for the virtual image in convex lens
        else if (u < f)
        {
            setcolor(YELLOW);
            line(360 - u, 250, 360 - u, 250 - ho);
            circle(360 - u, 255 - ho, 5);
            x1 = 360 - u;
            y1 = 255 - ho;
            x2 = 360;
            y2 = 255 - ho;
            dx = x2 - x1;
            dy = y2 - y1;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x1, y1, 2);
                    x1 = x1 + 1;
                    y1 = y1;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x1, y1, 2);
                    x1 = x1 + 1;
                    y1 = y1 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }
            x3 = 360;
            y3 = 255 - ho;
            x4 = 360 + f;
            y4 = 252;
            dx = x4 - x3;
            dy = y4 - y3;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x3, y3, 2);
                    x3 = x3 + 1;
                    y3 = y3;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x3, y3, 2);
                    x3 = x3 + 1;
                    y3 = y3 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }
            x6 = 580 - ho;
            y6 = (255 - ho) + ((ho - 3) * (220 - ho)) / f;
            x5 = 360 + f;
            y5 = 252;
            dx = x6 - x5;
            dy = y6 - y5;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x5, y5, 2);
                    x5 = x5 + 1;
                    y5 = y5;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x5, y5, 2);
                    x5 = x5 + 1;
                    y5 = y5 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }

            //   equation of line passing through cneter of curvecture
            x6 = 360;
            y6 = 252;
            x5 = 360 - u;
            y5 = 255 - ho;
            dx = x6 - x5;
            dy = y6 - y5;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x5, y5, 2);
                    x5 = x5 + 1;
                    y5 = y5;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x5, y5, 2);
                    x5 = x5 + 1;
                    y5 = y5 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }
            x5 = 360;
            y5 = 252;
            x6 = 575 - ho;
            y6 = 252 + ((ho - 3) * (215 - ho)) / u;
            dx = x6 - x5;
            dy = y6 - y5;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x5, y5, 2);
                    x5 = x5 + 1;
                    y5 = y5;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x5, y5, 2);
                    x5 = x5 + 1;
                    y5 = y5 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }

            //inverted part of image

            x4 = 360;
            y4 = 255 - ho;
            x3 = 360 + v;
            y3 = 252 + hi;
            dx = x4 - x3;
            dy = y4 - y3;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x3, y3, 4);
                    x3 = x3 + 1;
                    y3 = y3;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x3, y3, 4);
                    x3 = x3 + 1;
                    y3 = y3 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }
            x4 = 360 - u;
            y4 = 255 - ho;
            x3 = 360 + v;
            y3 = 252 + hi;
            dx = x4 - x3;
            dy = y4 - y3;
            p = 2 * dy - dx;
            for (k = 0; k < dx; k++)
            {
                if (p < 0)
                {
                    putpixel(x3, y3, 4);
                    x3 = x3 + 1;
                    y3 = y3;
                    p = p + 2 * abs(dy);
                    delay(10);
                }
                else
                {
                    putpixel(x3, y3, 4);
                    x3 = x3 + 1;
                    y3 = y3 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(10);
                }
            }
            line(360 + v, 252 + hi + 10, 360 + v, 250);
            circle(360 + v, 252 + hi, 5);
            outtextxy(200, 400, "virtual image, inverted, enlarge");
        }
        getch();
        closegraph();
        break;
    case 3: // initwindow(1000, 1000);
            // // // // // // // // // // // // // // // // // // // // //   Siddharth Phogat

        printf("For Object between O to infinity press 1.\nAnd for Object at infinity press 2\n");
        scanf("%d", &num);
        line(0, 240, 1000, 240);
        arc(265, 240, 310, 50, 90);
        arc(465, 240, 130, 230, 90);
        line(320, 308, 408, 308);
        line(320, 170, 408, 170);
        if (num == 1)
        {
            outtextxy(200, 100, "CASE : WHEN OBJECT IS BETWEEN O AND INFINITY");
            printf("IMPORTANT note:\n1. Take the height of object less than 50.\n2. To make the object appear at infnity put u=400\n");
            printf("Enter the value of focal length :\n");
            scanf("%d", &f);
            printf("Enter the value of distance of object : \n");
            scanf("%d", &u);
            printf("Enter the height of object : \n");
            scanf("%d", &ho);
            u = u + 1;
            v = (u * f) / (u - f);
            hi = (ho * v) / u;

            outtextxy(360 - f, 242, "F");
            outtextxy(360 - 2 * f, 242, "2F");
            outtextxy(360, 242, "O");
            outtextxy(360 + f, 242, "F");
            outtextxy(360 + 2 * f, 242, "2F");

            if (u - 1 < o)
            {
                setcolor(YELLOW);
                line(360 - u, 240, 360 - u, 242 - ho);
                circle(360 - u, 242 - ho, 5);

                x1 = 360 - u;
                y1 = 242 - ho;
                x2 = 360;
                y2 = 242 - ho;
                dx = x2 - x1;
                dy = y2 - y1;
                p = 2 * dy - dx;
                for (k = 0; k < dx; k++)
                {
                    if (p < 0)
                    {
                        putpixel(x1, y1, 4);
                        x1 = x1 + 1;
                        y1 = y1;
                        p = p + 2 * abs(dy);
                        delay(10);
                    }
                }

                x3 = 360;
                y3 = 242 - ho;
                x4 = 360 + v;
                y4 = 242 + hi;
                dx = x4 - x3;
                dy = y4 - y3;
                p = 2 * dy - dx;
                for (k = 0; k < dx; k++)
                {
                    if (p < 0)
                    {
                        putpixel(x3, y3, 4);
                        x3 = x3 + 1;
                        y3 = y3;
                        p = p + 2 * abs(dy);
                        delay(10);
                    }
                    else
                    {
                        putpixel(x3, y3, 4);
                        x3 = x3 + 1;
                        y3 = y3 - 1;
                        p = p + 2 * abs(dy) - 2 * abs(dx);
                        delay(10);
                    }
                }

                x6 = 360 + v;
                y6 = 242 + hi;
                x5 = 360 - u;
                y5 = 242 - ho;
                dx = x6 - x5;
                dy = y6 - y5;
                p = 2 * dy - dx;
                for (k = 0; k < dx; k++)
                {
                    if (p < 0)
                    {
                        putpixel(x5, y5, 4);
                        x5 = x5 + 1;
                        y5 = y5;
                        p = p + 2 * abs(dy);
                        delay(10);
                    }
                    else
                    {
                        putpixel(x5, y5, 4);
                        x5 = x5 + 1;
                        y5 = y5 + 1;
                        p = p + 2 * abs(dy) - 2 * abs(dx);
                        delay(10);
                    }
                }

                x3 = 360;
                y3 = 242 - ho;
                x4 = 360 + v;
                y4 = 242 + hi;
                dx = x4 - x3;
                dy = y4 - y3;
                p = 2 * dy - dx;
                for (k = 0; k < dx; k++)
                {
                    if (p < 0)
                    {
                        putpixel(x3, y3, 3);
                        x3 = x3 - 1;
                        y3 = y3;
                        p = p + 2 * abs(dy);
                        delay(10);
                    }
                    else
                    {
                        putpixel(x3, y3, 3);
                        x3 = x3 - 1;
                        y3 = y3 + 1;
                        p = p + 2 * abs(dy) - 2 * abs(dx);
                        delay(10);
                    }
                }
                setcolor(WHITE);
                line((735 - u) / 2, (488 - ho) / 2, (735 - u) / 2, 240);
                circle((735 - u) / 2, (484 - ho) / 2, 5);
                outtextxy(250, 285, "DIMINISHED, ERECT, VIRTUAL");
            }
            getch();
            closegraph();
        }
        else if (num == 2)
        {
            outtextxy(200, 100, "CASE : WHEN OBJECT IS AT INFINITY");
            printf("Enter the value of focal length :\n");
            scanf("%d", &f);
            printf("Enter the value of distance of object : \n");
            scanf("%d", &u);

            u = u + 1;
            v = (u * f) / (u - f);
            hi = (ho * v) / u;

            outtextxy(360 - f, 242, "F");
            outtextxy(360 - 2 * f, 242, "2F");
            outtextxy(360, 242, "O");
            outtextxy(360 + f, 242, "F");
            outtextxy(360 + 2 * f, 242, "2F");

            {
                //Above Ray
                x1 = -10;
                y1 = 205;
                x2 = 360;
                y2 = 205;
                dx = x2 - x1;
                dy = y2 - y1;
                p = 2 * dy - dx;
                for (k = 0; k < dx; k++)
                {
                    if (p < 0)
                    {
                        putpixel(x1, y1, 4);
                        x1 = x1 + 1;
                        y1 = y1;
                        p = p + 2 * abs(dy);
                        delay(10);
                    }
                }
                //Below Ray
                x3 = -10;
                y3 = 275;
                x4 = 360;
                y4 = 275;
                dx = x4 - x3;
                dy = y4 - y3;
                p = 2 * dy - dx;
                for (k = 0; k < dx; k++)
                {
                    if (p < 0)
                    {
                        putpixel(x3, y3, 4);
                        x3 = x3 + 1;
                        y3 = y3;
                        p = p + 2 * abs(dy);
                        delay(10);
                    }
                }
                //Above ray Refracted
                x3 = 360;
                y3 = 205;
                x4 = 360 + v;
                y4 = 242 + hi;
                dx = x4 - x3;
                dy = y4 - y3;
                p = 2 * dy - dx;
                for (k = 0; k < dx; k++)
                {
                    {
                        putpixel(x3, y3, 4);
                        x3 = x3 + 2.5;
                        y3 = y3 - 1;
                        p = p + 2 * abs(dy) - 2 * abs(dx);
                        delay(10);
                    }
                }
                //Below ray Refracted
                x3 = 360;
                y3 = 275;
                x4 = 360 + v;
                y4 = 242 + hi;
                dx = x4 - x3;
                dy = y4 - y3;
                p = 2 * dy - dx;
                for (k = 0; k < dx; k++)
                {
                    {
                        putpixel(x3, y3, 4);
                        x3 = x3 + 2;
                        y3 = y3 + 1;
                        p = p + 2 * abs(dy) - 2 * abs(dx);
                        delay(10);
                    }
                }
                //Above Ray Dotted
                x3 = 360 - f;
                y3 = 240;
                x4 = 360;
                y4 = 205;
                dx = x4 - x3;
                dy = y4 - y3;
                p = 2 * dy - dx;
                for (k = 0; k < dx; k++)
                {
                    if (p < 0)
                    {
                        putpixel(x3, y3, 3);
                        x3 = x3 + 1;
                        y3 = y3;
                        p = p + 2 * abs(dy);
                        delay(10);
                    }
                    else
                    {
                        putpixel(x3, y3, 3);
                        x3 = x3 + 1;
                        y3 = y3 - 1;
                        p = p + 2 * abs(dy) - 2 * abs(dx);
                        delay(10);
                    }
                }
                //Below Ray Dotted
                x3 = 360 - f;
                y3 = 240;
                x4 = 360;
                y4 = 275;
                dx = x4 - x3;
                dy = y4 - y3;
                p = 2 * dy - dx;
                for (k = 0; k < dx; k++)
                {
                    if (p < 0)
                    {
                        putpixel(x3, y3, 3);
                        x3 = x3 + 1;
                        y3 = y3;
                        p = p + 2 * abs(dy);
                        delay(10);
                    }
                    else
                    {
                        putpixel(x3, y3, 3);
                        x3 = x3 + 1;
                        y3 = y3 + 1;
                        p = p + 2 * abs(dy) - 2 * abs(dx);
                        delay(10);
                    }
                }
                setcolor(WHITE);
                outtextxy(200, 285, "POINT SIZED, ERECT, VIRTUAL");
            }
            getch();
            closegraph();
        }
        break;
    case 4:
        printf("10. Deviation\n");
        printf("20. Diffraction\n");
        printf("30. Exit\n");
        printf("Choice:\n");
        scanf("%d", &choice2);

        switch (choice2)
        {
        case 10:
            printf("Enter the x co-ordinate:\n");
            scanf("%d", &x);
            printf("Enter the y co-ordinate:\n");
            scanf("%d", &y);
            line(0, 250, 700, 250);
            line(320, 150, 400, 250);
            line(400, 250, 250, 250);
            line(250, 250, 320, 150);
            setcolor(14);
            outtextxy(285, 85, "Deviation");
            outtextxy(x - 15, y - 15, "source");
            outtextxy(320, 140, "A");
            outtextxy(410, 255, "C");
            outtextxy(240, 255, "B");
            if (x == 250 && y == 250)
            {
                setcolor(GREEN);
                line(x, y, 325, 145);
            }
            else if (y == 200)
            {
                setcolor(GREEN);
                line(x, y, 285, 200);
                line(285, 200, 370, 215);
                line(370, 215, 405, 255);
            }
            else
            {
                x1 = x;
                y1 = y;
                x2 = 285;
                y2 = 198;
                dx = x2 - x1;
                dy = y2 - y1;
                p = 2 * dy - dx;
                for (k = 0; k < abs(dx); k++)
                {
                    if (p < 0)
                    {
                        putpixel(x1, y1, 2);
                        x1 = x1 + 1;
                        y1 = y1;
                        p = p + 2 * abs(dy);
                        delay(40);
                    }
                    else if (y < 200)
                    {
                        putpixel(x1, y1, 2);
                        x1 = x1 + 1;
                        y1 = y1 + 1;
                        p = p + 2 * abs(dy) - 2 * abs(dx);
                        delay(40);
                    }
                    else
                    {
                        putpixel(x1, y1, 2);
                        x1 = x1 + 1;
                        y1 = y1 - 1;
                        p = p + 2 * abs(dy) - 2 * abs(dx);
                        delay(40);
                    }
                }
                x6 = x2;
                y6 = y2;
                x5 = 360;
                y5 = 200;
                dx = x6 - x5;
                for (k = 0; k < 75; k++)
                {
                    putpixel(x6, y6, 4);
                    x6 = x6 + 1;
                    y6 = y6;
                    delay(10);
                }
                x3 = x5;
                y3 = y5;
                x4 = 450;
                y4 = 250;
                dx = x4 - x3;
                dy = y4 - y3;
                p = 2 * dy - dx;
                for (k = 0; k < dx; k++)
                {
                    if (p < 0)
                    {
                        putpixel(x3, y3, 12);
                        x3 = x3 + 1;
                        y3 = y3;
                        p = p + 2 * abs(dy);
                        delay(40);
                    }
                    else
                    {
                        putpixel(x3, y3, 2);
                        x3 = x3 + 1;
                        y3 = y3 + 1;
                        p = p + 2 * abs(dy) - 2 * abs(dx);
                        delay(40);
                    }
                }
            }
            getch();
            closegraph();
            break;
        case 20:
            printf("Enter the x co-ordinates:\n");
            scanf("%d", &x);
            printf("Enter the y co-ordinates:\n");
            scanf("%d", &y);

            line(0, 250, 700, 250);
            line(320, 150, 400, 250);
            line(400, 250, 250, 250);
            line(250, 250, 320, 150);

            line(450, 150, 450, 250);
            setcolor(14);
            outtextxy(280, 85, "Diffraction");
            outtextxy(320, 140, "A");
            outtextxy(410, 255, "C");
            outtextxy(240, 255, "B");
            x1 = x;
            y1 = y;
            x2 = 285;
            y2 = 200;
            outtextxy(x1, y1 - 10, "source");
            dx = x2 - x1;
            dy = y2 - y1;
            p = 2 * dy - dx;
            for (k = 0; k < abs(dx); k++)
            {
                if (p < 0)
                {
                    putpixel(x1, y1, 2);
                    x1 = x1 + 1;
                    y1 = y1;
                    p = p + 2 * abs(dy);
                    delay(40);
                }

                else if (p < 0 && y1 > 200)
                {
                    putpixel(x1, y1, 2);
                    x1 = x1 + 1;
                    y1 = y1 - 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(40);
                }
                else if (y1 < 200)
                {
                    putpixel(x1, y1, 2);
                    x1 = x1 + 1;
                    y1 = y1 + 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(40);
                }
                else
                {
                    putpixel(x1, y1, 2);
                    x1 = x1 + 1;
                    y1 = y1 - 1;
                    p = p + 2 * abs(dy) - 2 * abs(dx);
                    delay(40);
                }
            }

            for (i = 1; i < 50; i++)
            {
                delay(40);
                setcolor(i / 6);
                line(x1, y1, 450, i + 200);
            }
            getch();
            closegraph;
            break;
        case 30:
            printf("\nBye\n");
            break;
        default:
            printf("\nInvalid Code\n");
        }
        break;
    case 5:
        printf("\nBye\n");
        break;
    default:
        printf("\nInvalid Code\n");
    

    getch();
    closegraph();
    }
    return 0;
}
