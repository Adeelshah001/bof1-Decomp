typedef struct 
{
  s32 class;
  u32 sign;
  s32 normal_exp;
  u64 fraction;
} fp_number_type;
extern f64 D_080A4AB4(fp_number_type *);
f64 sub_080A56CC(s32 arg0)
{
  fp_number_type in;
  in.class = 3;
  in.sign = arg0 < 0;
  if (!arg0)
  {
    in.class = 2;
  }
  else
  {
    in.normal_exp = 60;
    if (in.sign)
    {
      if (arg0 == ((-0x7FFFFFFF) - 1))
      {
        return -2147483648.0;
      }
      in.fraction = -arg0;
    }
    else
    {
      in.fraction = arg0;
    }
    while (in.fraction < (((u64) 1) << 60))
    {
      in.fraction <<= 1;
      (&in)->normal_exp -= 1;
    }

  }
  return D_080A4AB4(&in);
}

