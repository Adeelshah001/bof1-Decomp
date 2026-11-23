void sub_08001888(s32);
u8 *Entity_FindFreeSlot(void);
void sub_08027280(void)
{
  s32 one;
  u8 **new_var;
  u8 *p;
  sub_08001888(6);
  one = 1;
  p = Entity_FindFreeSlot();
  if (p != NULL)
  {
    p = (*(new_var = &p)) + 0x3A;
    *(*new_var) = one;
    p += 2;
    *p = 0x10;
    p -= 1;
    *(*new_var) = one;
  }
}

