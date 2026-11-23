extern u8 D_03004830[];
extern u8 D_030033F0[];
extern u8 D_03003420[];
volatile unsigned char sub_08003104(void);
void sub_08025098(void)
{
  *D_030033F0 |= 0x80;
  D_03004830[0x41] = sub_08003104() & 1;
  D_03004830[0x40]++;
}

void sub_080250C8(void);
