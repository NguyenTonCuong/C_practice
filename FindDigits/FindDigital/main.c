#include <stdio.h>
#include <stdint.h>

uint32_t g_EnterNumber_u32 = 0;
uint32_t g_Result_u32 = 0;


int m_FindDigital_u16(uint32_t l_Integer_u32)
{

	uint32_t l_numberOriginal_u16 = l_Integer_u32;
	uint32_t l_Count = 0;

	while (l_Integer_u32 != 0)
	{
		if (l_Integer_u32 % 10 != 0)
		{
			if (l_numberOriginal_u16 % (l_Integer_u32 % 10) == 0)
				l_Count++;
		}
		l_Integer_u32 /= 10;
	}

	return l_Count;

}
int main() {

	printf("Enter integer n = ");
	scanf_s("%d", &g_EnterNumber_u32);
//	g_EnterNumber_u32 = 12;

	g_Result_u32 = m_FindDigital_u16(g_EnterNumber_u32);

	printf("\nResult %d", g_Result_u32);

	getchar();
	return 0;
}