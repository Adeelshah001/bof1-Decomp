void sub_0802CCEC(void *arg0);
void sub_080313E4(void *arg0, s32 arg1)
{
  u8 *base = arg0;
  u32 t = arg1 << 24;
  u8 val;
  u32 f;
  val = *((u8 *) ((*((u32 *) (base + 0x88))) + 1));
  base[0xC3] = val;
  *((u32 *) (base + 0x88)) = (f = *((u32 *) (base + 0x88))) + 2;
  f = (0x0F000000 & t) >> 24;
  if (f == 0)
  {
    *((u16 *) (base + 0x22)) = f;
    sub_0802CCEC(base);
  }
  base[0x4D] = 4;
}

void sub_08031420(u8 *arg0, u8 arg1);
