// gtlc-dynamic.schml should return #(struct:Unit) generated by the schml
// compiler.

// This is the boiler plate
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

void *alloc_ptr;
long free_ptr;
long limit;
unsigned long allocd_mem;

long alloc(int n) {
  long result = free_ptr;
  long newFree = result + n;
  allocd_mem += n;
  if (newFree >= limit) {
    printf("Requesting more memory\n");
    free_ptr = (long)(posix_memalign(&alloc_ptr, 8, 409600000), alloc_ptr);
    limit = free_ptr + 409600000;
    return alloc(n);
  }
  free_ptr = newFree;
  return result;
}
// This is the global state for the timer
struct timeval timer_start_time;
struct timeval timer_stop_time;
struct timeval timer_result_time;
int timer_started = 1;
int timer_stopped = 1;

void timer_report() {

  // some very minor error checking
  if (timer_started) {
    printf("error starting timer");
    exit(-1);
  }
  if (timer_stopped) {
    printf("error stopping timer");
    exit(-1);
  }

  double t1 = timer_start_time.tv_sec + (timer_start_time.tv_usec / 1000000.0);
  double t2 = timer_stop_time.tv_sec + (timer_stop_time.tv_usec / 1000000.0);
  printf("time (sec): %lf\n", t2 - t1);
}

// These are the variable declarations
long u41_typeid;
long u40_typeid;

// These are the declarations
long u0_f(long u46_f_clos, long u1_n);
long u4_cast_fn_1(long u5_f, long u6_t1, long u7_t2, long u8_lbl);
long u42_annon(long u43_annon_clos, long u9_v);
long u20_rt_gvect_set(long u21_rt_gvect, long u22_rt_index,
                      long u23_rt_write_val);
long u17_rt_gvect_ref(long u18_rt_gvect, long u19_rt_index);
long u14_rt_gbox_set(long u15_rt_gref, long u16_rt_write_val);
long u12_rt_gunbox(long u13_rt_gref);
long u24_interp_cast(long u25_val, long u26_type1, long u27_type2,
                     long u28_label);

// Obviously this is the main function
int main() {
  long u172_unused_return;
  long u88_stop;
  long u87_start;
  long u86_tmp_value;
  long u85_tmp_value;
  long u76_result;
  long u47_f_clos;
  long u2_d;
  long u3_i;
  long u48_tmp_closure;
  long u77_argument;
  long u78_return;
  long u79_arity;
  long u80_Fun_Type;
  long u81_argument;
  long u82_return;
  long u83_arity;
  long u84_Fun_Type;
  free_ptr = (long)(posix_memalign(&alloc_ptr, 8, 409600000), alloc_ptr);
  limit = free_ptr + 409600000;
  allocd_mem = 0;

  u79_arity = 1;
  u78_return = 7;
  u77_argument = 15;
  u80_Fun_Type = alloc(8 * 3);
  ((long *)u80_Fun_Type)[0] = u79_arity;
  ((long *)u80_Fun_Type)[1] = u78_return;
  ((long *)u80_Fun_Type)[2] = u77_argument;
  u41_typeid = u80_Fun_Type;
  u83_arity = 1;
  u82_return = 15;
  u81_argument = 15;
  u84_Fun_Type = alloc(8 * 3);
  ((long *)u84_Fun_Type)[0] = u83_arity;
  ((long *)u84_Fun_Type)[1] = u82_return;
  ((long *)u84_Fun_Type)[2] = u81_argument;
  u40_typeid = u84_Fun_Type;
  u47_f_clos = alloc(8 * 2);
  ((long *)u47_f_clos)[0] = ((long)u0_f);
  ((long *)u47_f_clos)[1] = ((long)u4_cast_fn_1);
  u2_d = (u24_interp_cast(
      u47_f_clos, u40_typeid, 7,
      "Implicit cast in binding on expression at gtlc-dynamic.schml::61"));
  timer_started = gettimeofday(&timer_start_time, NULL);
  u87_start = 0;
  u88_stop = 1000000;
  for (u3_i = u87_start; u3_i < u88_stop; u3_i += 1) {
    u48_tmp_closure = (u24_interp_cast(u2_d, 7, u41_typeid,
                                       "Implicit cast in Application at "
                                       "gtlc-dynamic.schml::116 on expression "
                                       "at gtlc-dynamic.schml::117"));
    u85_tmp_value = (-8 & u48_tmp_closure);
    u86_tmp_value = ((long *)u85_tmp_value)[0];
    u172_unused_return =
        (((long (*)(long, long))u86_tmp_value)(u48_tmp_closure, 0));
    __asm__("");
  };
  timer_stopped = gettimeofday(&timer_stop_time, NULL);
  timer_report();
  u76_result = 0;
  printf("Unit : ()\n");
  return 0;
}

// Here are all the definitions for Subroutines
long u0_f(long u46_f_clos, long u1_n) { return u1_n; }

long u4_cast_fn_1(long u5_f, long u6_t1, long u7_t2, long u8_lbl) {
  long u44_annon_clos;
  u44_annon_clos = alloc(8 * 6);
  ((long *)u44_annon_clos)[0] = ((long)u42_annon);
  ((long *)u44_annon_clos)[1] = ((long)u4_cast_fn_1);
  ((long *)u44_annon_clos)[2] = u8_lbl;
  ((long *)u44_annon_clos)[3] = u6_t1;
  ((long *)u44_annon_clos)[4] = u5_f;
  ((long *)u44_annon_clos)[5] = u7_t2;
  return u44_annon_clos;
}

long u42_annon(long u43_annon_clos, long u9_v) {
  long u109_tmp_value;
  long u108_tmp_value;
  long u107_tmp_value;
  long u106_tmp_value;
  long u105_tmp_value;
  long u104_tmp_value;
  long u103_tmp_value;
  long u102_tmp_value;
  long u101_tmp_value;
  long u100_tmp_value;
  long u99_tmp_value;
  long u98_tmp_value;
  long u97_tmp_value;
  long u96_tmp_value;
  long u95_tmp_value;
  long u94_tmp_value;
  long u93_tmp_value;
  long u92_tmp_value;
  long u91_tmp_value;
  long u90_tmp_value;
  long u89_tmp_value;
  long u45_tmp_closure;
  u89_tmp_value = (u43_annon_clos & -8);
  u45_tmp_closure = ((long *)u89_tmp_value)[4];
  u90_tmp_value = (-8 & u45_tmp_closure);
  u91_tmp_value = ((long *)u90_tmp_value)[0];
  u92_tmp_value = (u43_annon_clos & -8);
  u93_tmp_value = ((long *)u92_tmp_value)[5];
  u94_tmp_value = ((long *)u93_tmp_value)[2];
  u95_tmp_value = (u43_annon_clos & -8);
  u96_tmp_value = ((long *)u95_tmp_value)[3];
  u97_tmp_value = ((long *)u96_tmp_value)[2];
  u98_tmp_value = (u43_annon_clos & -8);
  u99_tmp_value = ((long *)u98_tmp_value)[2];
  u100_tmp_value =
      (u24_interp_cast(u9_v, u94_tmp_value, u97_tmp_value, u99_tmp_value));
  u101_tmp_value =
      (((long (*)(long, long))u91_tmp_value)(u45_tmp_closure, u100_tmp_value));
  u102_tmp_value = (u43_annon_clos & -8);
  u103_tmp_value = ((long *)u102_tmp_value)[3];
  u104_tmp_value = ((long *)u103_tmp_value)[1];
  u105_tmp_value = (u43_annon_clos & -8);
  u106_tmp_value = ((long *)u105_tmp_value)[5];
  u107_tmp_value = ((long *)u106_tmp_value)[1];
  u108_tmp_value = (u43_annon_clos & -8);
  u109_tmp_value = ((long *)u108_tmp_value)[2];
  return (u24_interp_cast(u101_tmp_value, u104_tmp_value, u107_tmp_value,
                          u109_tmp_value));
}

long u20_rt_gvect_set(long u21_rt_gvect, long u22_rt_index,
                      long u23_rt_write_val) {
  long u121_tmp_value;
  long u120_tmp_value;
  long u119_tmp_value;
  long u118_tmp_value;
  long u117_tmp_value;
  long u116_tmp_value;
  long u115_tmp_value;
  long u114_tmp_value;
  long u113_tmp_value;
  long u112_tmp_value;
  long u111_tmp_value;
  long u110_tmp_value;
  long u74_index;
  long u75_ugvect;
  u110_tmp_value = (u21_rt_gvect & 7);
  if (u110_tmp_value == 1) {
    u111_tmp_value = (u21_rt_gvect ^ 1);
    u112_tmp_value = ((long *)u111_tmp_value)[0];
    u113_tmp_value = (u21_rt_gvect ^ 1);
    u114_tmp_value = ((long *)u113_tmp_value)[2];
    u115_tmp_value = (u21_rt_gvect ^ 1);
    u116_tmp_value = ((long *)u115_tmp_value)[1];
    u117_tmp_value = (u21_rt_gvect ^ 1);
    u118_tmp_value = ((long *)u117_tmp_value)[3];
    u119_tmp_value = (u24_interp_cast(u23_rt_write_val, u114_tmp_value,
                                      u116_tmp_value, u118_tmp_value));
    return (u20_rt_gvect_set(u112_tmp_value, u22_rt_index, u119_tmp_value));
  } else {
    u74_index = u22_rt_index;
    if (u74_index >= 0) {
      u75_ugvect = u21_rt_gvect;
      u120_tmp_value = ((long *)u75_ugvect)[0];
      if (u74_index < u120_tmp_value) {
        u121_tmp_value = (u74_index + 1);
        ((long *)u75_ugvect)[u121_tmp_value] = u23_rt_write_val;
        return 0;
      } else {
        printf("index out of bound %l\n", (void *)u74_index);
        exit(-1);
        return 0;
      }
    } else {
      printf("index out of bound %l\n", (void *)u74_index);
      exit(-1);
      return 0;
    }
  }
}

long u17_rt_gvect_ref(long u18_rt_gvect, long u19_rt_index) {
  long u133_tmp_value;
  long u132_tmp_value;
  long u131_tmp_value;
  long u130_tmp_value;
  long u129_tmp_value;
  long u128_tmp_value;
  long u127_tmp_value;
  long u126_tmp_value;
  long u125_tmp_value;
  long u124_tmp_value;
  long u123_tmp_value;
  long u122_tmp_value;
  long u73_e;
  long u72_index;
  u122_tmp_value = (u18_rt_gvect & 7);
  if (u122_tmp_value == 1) {
    u123_tmp_value = (u18_rt_gvect ^ 1);
    u124_tmp_value = ((long *)u123_tmp_value)[0];
    u125_tmp_value = (u17_rt_gvect_ref(u124_tmp_value, u19_rt_index));
    u126_tmp_value = (u18_rt_gvect ^ 1);
    u127_tmp_value = ((long *)u126_tmp_value)[1];
    u128_tmp_value = (u18_rt_gvect ^ 1);
    u129_tmp_value = ((long *)u128_tmp_value)[2];
    u130_tmp_value = (u18_rt_gvect ^ 1);
    u131_tmp_value = ((long *)u130_tmp_value)[3];
    return (u24_interp_cast(u125_tmp_value, u127_tmp_value, u129_tmp_value,
                            u131_tmp_value));
  } else {
    u72_index = u19_rt_index;
    u73_e = u18_rt_gvect;
    if (u72_index >= 0) {
      u132_tmp_value = ((long *)u73_e)[0];
      if (u72_index < u132_tmp_value) {
        u133_tmp_value = (u72_index + 1);
        return ((long *)u73_e)[u133_tmp_value];
      } else {
        printf("index out of bound %l\n", (void *)u72_index);
        exit(-1);
        return 0;
      }
    } else {
      printf("index out of bound %l\n", (void *)u72_index);
      exit(-1);
      return 0;
    }
  }
}

long u14_rt_gbox_set(long u15_rt_gref, long u16_rt_write_val) {
  long u143_tmp_value;
  long u142_tmp_value;
  long u141_tmp_value;
  long u140_tmp_value;
  long u139_tmp_value;
  long u138_tmp_value;
  long u137_tmp_value;
  long u136_tmp_value;
  long u135_tmp_value;
  long u134_tmp_value;
  u134_tmp_value = (u15_rt_gref & 7);
  if (u134_tmp_value == 1) {
    u135_tmp_value = (u15_rt_gref ^ 1);
    u136_tmp_value = ((long *)u135_tmp_value)[0];
    u137_tmp_value = (u15_rt_gref ^ 1);
    u138_tmp_value = ((long *)u137_tmp_value)[2];
    u139_tmp_value = (u15_rt_gref ^ 1);
    u140_tmp_value = ((long *)u139_tmp_value)[1];
    u141_tmp_value = (u15_rt_gref ^ 1);
    u142_tmp_value = ((long *)u141_tmp_value)[3];
    u143_tmp_value = (u24_interp_cast(u16_rt_write_val, u138_tmp_value,
                                      u140_tmp_value, u142_tmp_value));
    return (u14_rt_gbox_set(u136_tmp_value, u143_tmp_value));
  } else {
    ((long *)u15_rt_gref)[0] = u16_rt_write_val;
    return 0;
  }
}

long u12_rt_gunbox(long u13_rt_gref) {
  long u153_tmp_value;
  long u152_tmp_value;
  long u151_tmp_value;
  long u150_tmp_value;
  long u149_tmp_value;
  long u148_tmp_value;
  long u147_tmp_value;
  long u146_tmp_value;
  long u145_tmp_value;
  long u144_tmp_value;
  u144_tmp_value = (u13_rt_gref & 7);
  if (u144_tmp_value == 1) {
    u145_tmp_value = (u13_rt_gref ^ 1);
    u146_tmp_value = ((long *)u145_tmp_value)[0];
    u147_tmp_value = (u12_rt_gunbox(u146_tmp_value));
    u148_tmp_value = (u13_rt_gref ^ 1);
    u149_tmp_value = ((long *)u148_tmp_value)[1];
    u150_tmp_value = (u13_rt_gref ^ 1);
    u151_tmp_value = ((long *)u150_tmp_value)[2];
    u152_tmp_value = (u13_rt_gref ^ 1);
    u153_tmp_value = ((long *)u152_tmp_value)[3];
    return (u24_interp_cast(u147_tmp_value, u149_tmp_value, u151_tmp_value,
                            u153_tmp_value));
  } else {
    return ((long *)u13_rt_gref)[0];
  }
}

long u24_interp_cast(long u25_val, long u26_type1, long u27_type2,
                     long u28_label) {
  long u171_tmp_value;
  long u170_tmp_value;
  long u169_tmp_value;
  long u168_tmp_value;
  long u167_tmp_value;
  long u166_tmp_value;
  long u165_tmp_value;
  long u164_tmp_value;
  long u163_tmp_value;
  long u162_tmp;
  long u161_tmp;
  long u160_tmp;
  long u159_tmp_value;
  long u158_tmp;
  long u157_tmp_value;
  long u156_tmp_value;
  long u155_tmp_value;
  long u154_tmp_value;
  long u29_tag;
  long u43_dyn_value_tmp;
  long u44_dyn_value_tag;
  long u45_tmp;
  long u46_tag;
  long u30_tag1;
  long u48_type;
  long u47_value;
  long u49_tag;
  long u50_imm;
  long u51_dynamic_boxed;
  long u31_tag2;
  long u32_type1_arity;
  long u33_type2_arity;
  long u53_type;
  long u52_value;
  long u54_tag;
  long u55_imm;
  long u56_dynamic_boxed;
  long u34_tag_gref;
  long u35_g1;
  long u36_g2;
  long u61_blame;
  long u60_target_t;
  long u59_source_t;
  long u58_guarded_ref;
  long u57_guarded_proxy;
  long u63_type;
  long u62_value;
  long u64_tag;
  long u65_imm;
  long u66_dynamic_boxed;
  long u37_tag_gvect;
  long u38_g1;
  long u39_g2;
  long u71_blame;
  long u70_target_t;
  long u69_source_t;
  long u68_guarded_ref;
  long u67_guarded_proxy;
  if (u26_type1 == u27_type2) {
    return u25_val;
  } else {
    if (u26_type1 == 7) {
      u29_tag = (u25_val & 7);
      if (1 == u29_tag) {
        u154_tmp_value = (u25_val >> 3);
        return (u24_interp_cast(u154_tmp_value, 15, u27_type2, u28_label));
      } else {
        if (7 == u29_tag) {
          u155_tmp_value = (u25_val >> 3);
          return (u24_interp_cast(u155_tmp_value, 23, u27_type2, u28_label));
        } else {
          if (2 == u29_tag) {
            return (u24_interp_cast(0, 31, u27_type2, u28_label));
          } else {
            if (0 == u29_tag) {
              u43_dyn_value_tmp = u25_val;
              u44_dyn_value_tag = (u43_dyn_value_tmp & 7);
              if (u44_dyn_value_tag == 0) {
                u156_tmp_value = ((long *)u43_dyn_value_tmp)[0];
                u158_tmp = u156_tmp_value;
              } else {
                u157_tmp_value = (u43_dyn_value_tmp >> 3);
                u158_tmp = u157_tmp_value;
              };
              u45_tmp = u25_val;
              u46_tag = (u45_tmp & 7);
              if (u46_tag == 0) {
                u159_tmp_value = ((long *)u45_tmp)[1];
                u162_tmp = u159_tmp_value;
              } else {
                if (u46_tag == 1) {
                  u161_tmp = 15;
                } else {
                  if (u46_tag == 7) {
                    u160_tmp = 23;
                  } else {
                    u160_tmp = 31;
                  };
                  u161_tmp = u160_tmp;
                };
                u162_tmp = u161_tmp;
              };
              return (
                  u24_interp_cast(u158_tmp, u162_tmp, u27_type2, u28_label));
            } else {
              puts(((const char *)"Unexpected value in cast tree"));
              exit(-1);
              return 0;
            }
          }
        }
      }
    } else {
      if (u26_type1 == 15) {
        if (7 == u27_type2) {
          u163_tmp_value = (u25_val << 3);
          return (u163_tmp_value + 1);
        } else {
          puts(((const char *)u28_label));
          exit(-1);
          return 0;
        }
      } else {
        if (u26_type1 == 23) {
          if (7 == u27_type2) {
            u164_tmp_value = (u25_val << 3);
            return (u164_tmp_value + 7);
          } else {
            puts(((const char *)u28_label));
            exit(-1);
            return 0;
          }
        } else {
          if (u26_type1 == 31) {
            if (7 == u27_type2) {
              u165_tmp_value = (u25_val << 3);
              return (u165_tmp_value + 2);
            } else {
              puts(((const char *)u28_label));
              exit(-1);
              return 0;
            }
          } else {
            u30_tag1 = (u26_type1 & 7);
            if (0 == u30_tag1) {
              if (7 == u27_type2) {
                u47_value = u25_val;
                u48_type = u26_type1;
                u49_tag = (u48_type & 7);
                if (u49_tag == 7) {
                  u50_imm = (u47_value << 3);
                  if (u48_type == 15) {
                    return (u50_imm | 1);
                  } else {
                    if (u48_type == 23) {
                      return (u50_imm | 7);
                    } else {
                      return (u50_imm | 2);
                    }
                  }
                } else {
                  u51_dynamic_boxed = alloc(8 * 2);
                  ((long *)u51_dynamic_boxed)[0] = u47_value;
                  ((long *)u51_dynamic_boxed)[1] = u48_type;
                  return u51_dynamic_boxed;
                }
              } else {
                u31_tag2 = (u27_type2 & 7);
                if (u31_tag2 == 0) {
                  u32_type1_arity = ((long *)u26_type1)[0];
                  u33_type2_arity = ((long *)u27_type2)[0];
                  if (u32_type1_arity == u33_type2_arity) {
                    u166_tmp_value = (-8 & u25_val);
                    u167_tmp_value = ((long *)u166_tmp_value)[1];
                    return (((long (*)(long, long, long, long))u167_tmp_value)(
                        u25_val, u26_type1, u27_type2, u28_label));
                  } else {
                    puts(((const char *)u28_label));
                    exit(-1);
                    return 0;
                  }
                } else {
                  puts(((const char *)u28_label));
                  exit(-1);
                  return 0;
                }
              }
            } else {
              if (1 == u30_tag1) {
                if (7 == u27_type2) {
                  u52_value = u25_val;
                  u53_type = u26_type1;
                  u54_tag = (u53_type & 7);
                  if (u54_tag == 7) {
                    u55_imm = (u52_value << 3);
                    if (u53_type == 15) {
                      return (u55_imm | 1);
                    } else {
                      if (u53_type == 23) {
                        return (u55_imm | 7);
                      } else {
                        return (u55_imm | 2);
                      }
                    }
                  } else {
                    u56_dynamic_boxed = alloc(8 * 2);
                    ((long *)u56_dynamic_boxed)[0] = u52_value;
                    ((long *)u56_dynamic_boxed)[1] = u53_type;
                    return u56_dynamic_boxed;
                  }
                } else {
                  u34_tag_gref = (u27_type2 & 7);
                  if (u34_tag_gref == 1) {
                    u168_tmp_value = (u26_type1 ^ 1);
                    u35_g1 = ((long *)u168_tmp_value)[0];
                    u169_tmp_value = (u27_type2 ^ 1);
                    u36_g2 = ((long *)u169_tmp_value)[0];
                    u58_guarded_ref = u25_val;
                    u59_source_t = u35_g1;
                    u60_target_t = u36_g2;
                    u61_blame = u28_label;
                    u57_guarded_proxy = alloc(8 * 4);
                    ((long *)u57_guarded_proxy)[0] = u58_guarded_ref;
                    ((long *)u57_guarded_proxy)[1] = u59_source_t;
                    ((long *)u57_guarded_proxy)[2] = u60_target_t;
                    ((long *)u57_guarded_proxy)[3] = u61_blame;
                    return (u57_guarded_proxy | 1);
                  } else {
                    puts(((const char *)u28_label));
                    exit(-1);
                    return 0;
                  }
                }
              } else {
                if (2 == u30_tag1) {
                  if (7 == u27_type2) {
                    u62_value = u25_val;
                    u63_type = u26_type1;
                    u64_tag = (u63_type & 7);
                    if (u64_tag == 7) {
                      u65_imm = (u62_value << 3);
                      if (u63_type == 15) {
                        return (u65_imm | 1);
                      } else {
                        if (u63_type == 23) {
                          return (u65_imm | 7);
                        } else {
                          return (u65_imm | 2);
                        }
                      }
                    } else {
                      u66_dynamic_boxed = alloc(8 * 2);
                      ((long *)u66_dynamic_boxed)[0] = u62_value;
                      ((long *)u66_dynamic_boxed)[1] = u63_type;
                      return u66_dynamic_boxed;
                    }
                  } else {
                    u37_tag_gvect = (u27_type2 & 7);
                    if (u37_tag_gvect == 2) {
                      u170_tmp_value = (u26_type1 ^ 2);
                      u38_g1 = ((long *)u170_tmp_value)[0];
                      u171_tmp_value = (u27_type2 ^ 2);
                      u39_g2 = ((long *)u171_tmp_value)[0];
                      u68_guarded_ref = u25_val;
                      u69_source_t = u38_g1;
                      u70_target_t = u39_g2;
                      u71_blame = u28_label;
                      u67_guarded_proxy = alloc(8 * 4);
                      ((long *)u67_guarded_proxy)[0] = u68_guarded_ref;
                      ((long *)u67_guarded_proxy)[1] = u69_source_t;
                      ((long *)u67_guarded_proxy)[2] = u70_target_t;
                      ((long *)u67_guarded_proxy)[3] = u71_blame;
                      return (u67_guarded_proxy | 1);
                    } else {
                      puts(((const char *)u28_label));
                      exit(-1);
                      return 0;
                    }
                  }
                } else {
                  puts(((const char *)"Unexpected Type1 in cast tree"));
                  exit(-1);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
}
