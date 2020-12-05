using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace Testingtest


private void Main(object sender, EventArgs e)
{
    int[] vec1 = new int[5] { 1, 2, 3, 4, 5 };
    int[] vec2 = new int[5] { 6, 7, 8, 9, 10 };
    int[] vec3 = Vecadd(vec1, vec2);
}

int[] Vecadd(int[] vecc1, int[] vecc2)
{

    int[] vecc3 = new int[(vecc1.Length + vecc2.Length)];

    for (int i = 0; i < vecc1.Length; i++)
    {

        vecc3[i] = vecc1[i];
    }
    for (int i = vecc1.Length; i < (vecc2.Length + vecc1.Length); i++)
    {
        vecc3[i] = vecc2[i - vecc1.Length];
    }
    return vecc3;

}
