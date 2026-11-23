void sub_08080970(void *arg0);
struct UnkCC4
{
  u8 pad10[0x10];
  u8 unk10 : 8;
};
inline u8 inline_fn(u8 *arg0)
{
  return arg0[0x0C];
}

void sub_08074CC4(void *arg0)
{
  u32 timer;
  u8 *flag = (u8 *) 0x03004F30;
  struct UnkCC4 *self = (struct UnkCC4 *) arg0;
  if (((u8 *) arg0)[0x5D] == 0)
  {
    if (((unsigned int) (*((u16 *) (((u8 *) arg0) + 0x40)))) != 0)
    {
      sub_08080970(arg0);
    }
    if (!(inline_fn(flag) & 3))
    {
      timer = (u32) (((u8 *) arg0)[0x10] - 1);
      if ((self->unk10 = timer) & 0x80)
      {
        ((u8 *) arg0)[1] = 2;
      }
    }
  }
}

void sub_0807462C(void);
void sub_08074638(void *arg0);
void sub_08084BB0(void);
void sub_080745E8(void *arg0);
