#define _CRT_SECURE_NO_WARNINGS 1
    double function(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        else
        {
            return 1 / (1 + function(n - 1));
        }
    }
    //´úÂëÆ¬¶ÎÌâÄ¿