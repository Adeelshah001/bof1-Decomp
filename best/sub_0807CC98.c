extern u8 D_081A0E7C[];
extern u8 D_02020FC0[];
extern u8 D_020211C0[];
extern u8 D_08151C57[];
extern u8 D_08151C5E[];
void sub_08037FC4(void *, s32);
void sub_0807D7DC(void *);
void sub_0807CC98(unsigned long arg2, u16 arg1)
{
  u16 src = arg1;
  u16 dst = arg2;
  u16 count = 15;
  do
  {
    u16 val = *((u16 *) (D_081A0E7C + src));
    *((u16 *) (D_02020FC0 + dst)) = val;
    *((u16 *) (D_020211C0 + dst)) = val;
    src = (u16) (src + 2);
    dst = (u16) (dst + 2);
    count = (u16) (count - 1);
  }
  while (count != 0);
}

void sub_0807C8C0(void *arg0);
