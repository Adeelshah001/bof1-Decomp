extern u8 D_03004F30[];
extern u8 D_03004F50[];
u16 sub_0807B2BC(void *);
void sub_08037FC4(void *, s32);
void sub_0808DBE8(void *);
s32 sub_0807CE30(void *);
void sub_0807CB08(void);
void sub_0807C484(void *);
s32 sub_08083300(void *, unsigned int);
inline u8 *inline_fn(void *arg0)
{
  return ((u8 *) arg0) + 0xE1;
}

void sub_0808DD50(void *arg0)
{
  u8 v;
  u8 *p;
  u8 *new_var4;
  long long new_var2;
  u8 *new_var3;
  u8 *new_var;
  if ((*((u8 *) (((u8 *) arg0) + 0xE0))) == 0xA)
  {
    v = (long) 0x1D;
    p = inline_fn(arg0);
    *p = v;
    if (sub_0807CE30(arg0) == 0)
    {
      sub_0807CB08();
      new_var2 = 0x3C;
      p = ((u8 *) arg0) + 0x54;
      ;
      *p = new_var2;
      p -= 7;
      v = (*p = 8);
      return;
    }
  }
  new_var4 = (u8 *) arg0;
  new_var3 = new_var4;
  sub_0807C484(arg0);
  sub_08083300(arg0, 0x44);
  *((u32 *) ((*((u32 *) (((u8 *) arg0) + 0x74))) + 0x78)) = *((u32 *) (new_var3 + 0x78));
  v = 4;
  new_var = new_var3 + 0x4D;
  ;
  *new_var = v;
}

void sub_0808D930(void *arg0);
void sub_0808D7A0(void *arg0);
