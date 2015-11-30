// static.schml should return #(struct:Unit) generated by the schml compiler.

// This is the boiler plate
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

void *alloc_ptr;

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

// These are the declarations
long u37_value(long u56_value_clos, long u1_n);
long u3_cast_fn1(long u47_cast_fn1_clos, long u4_f, long u5_t1, long u6_t2,
                 long u7_lbl);
long u39_annon(long u54_annon_clos);
long u38_annon(long u49_annon_clos, long u8_v);
long u9_interp_cast(long u40_interp_cast_clos, long u10_val, long u11_type1,
                    long u12_type2, long u13_label);

// Obviously this is the main function
int main() {
  long u114_unused_return;
  long u79_stop;
  long u78_start;
  long u77_tmp_value;
  long u76_tmp_value;
  long u41_interp_cast_clos;
  long u75_result;
  long u48_cast_fn1_clos;
  long u0_f;
  long u57_value_clos;
  long u58_tmp_clos;
  long u73_FunT;
  long u74_FunT;
  long u2_i;
  u41_interp_cast_clos =
      (long)(posix_memalign(&alloc_ptr, 8, 8 * 3), alloc_ptr);
  ((long *)u41_interp_cast_clos)[0] = ((long)u9_interp_cast);
  ((long *)u41_interp_cast_clos)[1] = 0;
  ((long *)u41_interp_cast_clos)[2] = u41_interp_cast_clos;
  u48_cast_fn1_clos = (long)(posix_memalign(&alloc_ptr, 8, 8 * 4), alloc_ptr);
  ((long *)u48_cast_fn1_clos)[0] = ((long)u3_cast_fn1);
  ((long *)u48_cast_fn1_clos)[1] = 0;
  ((long *)u48_cast_fn1_clos)[2] = u41_interp_cast_clos;
  ((long *)u48_cast_fn1_clos)[3] = u48_cast_fn1_clos;
  u57_value_clos = (long)(posix_memalign(&alloc_ptr, 8, 8 * 2), alloc_ptr);
  ((long *)u57_value_clos)[0] = ((long)u37_value);
  ((long *)u57_value_clos)[1] = u48_cast_fn1_clos;
  u58_tmp_clos = ((long *)u57_value_clos)[1];
  u76_tmp_value = ((long *)u58_tmp_clos)[0];
  u73_FunT = (long)(posix_memalign(&alloc_ptr, 8, 8 * 3), alloc_ptr);
  ((long *)u73_FunT)[0] = 1;
  ((long *)u73_FunT)[1] = 7;
  ((long *)u73_FunT)[2] = 7;
  u74_FunT = (long)(posix_memalign(&alloc_ptr, 8, 8 * 3), alloc_ptr);
  ((long *)u74_FunT)[0] = 1;
  ((long *)u74_FunT)[1] = 15;
  ((long *)u74_FunT)[2] = 15;
  u0_f = (((long (*)(long, long, long, long, long))u76_tmp_value)(
      u58_tmp_clos, u57_value_clos, u73_FunT, u74_FunT,
      "Implicit cast in binding on expression at static.schml::28"));
  timer_started = gettimeofday(&timer_start_time, NULL);
  u78_start = 0;
  u79_stop = 1000000;
  for (u2_i = u78_start; u2_i < u79_stop; u2_i += 1) {
    u77_tmp_value = ((long *)u0_f)[0];
    u114_unused_return = (((long (*)(long, long))u77_tmp_value)(u0_f, 0));
    __asm__("");
  };
  timer_stopped = gettimeofday(&timer_stop_time, NULL);
  timer_report();
  u75_result = 0;
  printf("Unit : ()\n");
  return 0;
}

// Here are all the definitions for Subroutines
long u37_value(long u56_value_clos, long u1_n) { return u1_n; }

long u3_cast_fn1(long u47_cast_fn1_clos, long u4_f, long u5_t1, long u6_t2,
                 long u7_lbl) {
  long u84_tmp_value;
  long u83_tmp_value;
  long u82_tmp_value;
  long u81_tmp_value;
  long u80_tmp_value;
  long u50_annon_clos;
  long u55_annon_clos;
  u80_tmp_value = ((long *)u5_t1)[0];
  u81_tmp_value = ((long *)u6_t2)[0];
  if (u80_tmp_value == u81_tmp_value) {
    u50_annon_clos = (long)(posix_memalign(&alloc_ptr, 8, 8 * 7), alloc_ptr);
    ((long *)u50_annon_clos)[0] = ((long)u38_annon);
    u82_tmp_value = ((long *)u47_cast_fn1_clos)[3];
    ((long *)u50_annon_clos)[1] = u82_tmp_value;
    ((long *)u50_annon_clos)[2] = u6_t2;
    u83_tmp_value = ((long *)u47_cast_fn1_clos)[2];
    ((long *)u50_annon_clos)[3] = u83_tmp_value;
    ((long *)u50_annon_clos)[4] = u7_lbl;
    ((long *)u50_annon_clos)[5] = u5_t1;
    ((long *)u50_annon_clos)[6] = u4_f;
    return u50_annon_clos;
  } else {
    u55_annon_clos = (long)(posix_memalign(&alloc_ptr, 8, 8 * 3), alloc_ptr);
    ((long *)u55_annon_clos)[0] = ((long)u39_annon);
    u84_tmp_value = ((long *)u47_cast_fn1_clos)[3];
    ((long *)u55_annon_clos)[1] = u84_tmp_value;
    ((long *)u55_annon_clos)[2] = u7_lbl;
    return u55_annon_clos;
  }
}

long u39_annon(long u54_annon_clos) {
  long u85_tmp_value;
  u85_tmp_value = ((long *)u54_annon_clos)[2];
  puts(((const char *)u85_tmp_value));
  exit(-1);
  return 0;
}

long u38_annon(long u49_annon_clos, long u8_v) {
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
  long u88_tmp_value;
  long u87_tmp_value;
  long u86_tmp_value;
  long u53_tmp_clos;
  long u52_tmp_clos;
  long u51_tmp_clos;
  u53_tmp_clos = ((long *)u49_annon_clos)[3];
  u86_tmp_value = ((long *)u53_tmp_clos)[0];
  u52_tmp_clos = ((long *)u49_annon_clos)[6];
  u87_tmp_value = ((long *)u52_tmp_clos)[0];
  u51_tmp_clos = ((long *)u49_annon_clos)[3];
  u88_tmp_value = ((long *)u51_tmp_clos)[0];
  u89_tmp_value = ((long *)u49_annon_clos)[2];
  u90_tmp_value = ((long *)u89_tmp_value)[2];
  u91_tmp_value = ((long *)u49_annon_clos)[5];
  u92_tmp_value = ((long *)u91_tmp_value)[2];
  u93_tmp_value = ((long *)u49_annon_clos)[4];
  u94_tmp_value = (((long (*)(long, long, long, long, long))u88_tmp_value)(
      u51_tmp_clos, u8_v, u90_tmp_value, u92_tmp_value, u93_tmp_value));
  u95_tmp_value =
      (((long (*)(long, long))u87_tmp_value)(u52_tmp_clos, u94_tmp_value));
  u96_tmp_value = ((long *)u49_annon_clos)[5];
  u97_tmp_value = ((long *)u96_tmp_value)[1];
  u98_tmp_value = ((long *)u49_annon_clos)[2];
  u99_tmp_value = ((long *)u98_tmp_value)[1];
  u100_tmp_value = ((long *)u49_annon_clos)[4];
  return (((long (*)(long, long, long, long, long))u86_tmp_value)(
      u53_tmp_clos, u95_tmp_value, u97_tmp_value, u99_tmp_value,
      u100_tmp_value));
}

long u9_interp_cast(long u40_interp_cast_clos, long u10_val, long u11_type1,
                    long u12_type2, long u13_label) {
  long u113_tmp_value;
  long u112_tmp_value;
  long u111_tmp_value;
  long u110_tmp_value;
  long u109_tmp_value;
  long u108_tmp_value;
  long u107_tmp_value;
  long u106_tmp_value;
  long u105_tmp_value;
  long u104_tmp_value;
  long u103_tmp_value;
  long u102_tmp_value;
  long u101_tmp_value;
  long u17_tag;
  long u42_tmp_clos;
  long u43_tmp_clos;
  long u44_tmp_clos;
  long u45_tmp_clos;
  long u60_dyn_box_init;
  long u59_dyn_box_init;
  long u61_dyn_box;
  long u25_tag1;
  long u63_dyn_box_init;
  long u62_dyn_box_init;
  long u64_dyn_box;
  long u27_tag2;
  long u46_tmp_clos;
  long u66_dyn_box_init;
  long u65_dyn_box_init;
  long u67_dyn_box;
  long u32_tag_gref;
  long u33_g1;
  long u34_g2;
  long u72_blames;
  long u71_to;
  long u70_from;
  long u69_for;
  long u68_gproxy;
  if (u11_type1 == u12_type2) {
    return u10_val;
  } else {
    if (u11_type1 == 7) {
      u17_tag = (u10_val & 7);
      if (1 == u17_tag) {
        u42_tmp_clos = ((long *)u40_interp_cast_clos)[2];
        u101_tmp_value = ((long *)u42_tmp_clos)[0];
        u102_tmp_value = (u10_val >> 3);
        return (((long (*)(long, long, long, long, long))u101_tmp_value)(
            u42_tmp_clos, u102_tmp_value, 15, u12_type2, u13_label));
      } else {
        if (7 == u17_tag) {
          u43_tmp_clos = ((long *)u40_interp_cast_clos)[2];
          u103_tmp_value = ((long *)u43_tmp_clos)[0];
          u104_tmp_value = (u10_val >> 3);
          return (((long (*)(long, long, long, long, long))u103_tmp_value)(
              u43_tmp_clos, u104_tmp_value, 23, u12_type2, u13_label));
        } else {
          if (2 == u17_tag) {
            u44_tmp_clos = ((long *)u40_interp_cast_clos)[2];
            u105_tmp_value = ((long *)u44_tmp_clos)[0];
            return (((long (*)(long, long, long, long, long))u105_tmp_value)(
                u44_tmp_clos, 0, 23, u12_type2, u13_label));
          } else {
            if (0 == u17_tag) {
              u45_tmp_clos = ((long *)u40_interp_cast_clos)[2];
              u106_tmp_value = ((long *)u45_tmp_clos)[0];
              u107_tmp_value = ((long *)u10_val)[0];
              u108_tmp_value = ((long *)u10_val)[1];
              return (((long (*)(long, long, long, long, long))u106_tmp_value)(
                  u45_tmp_clos, u107_tmp_value, u108_tmp_value, u12_type2,
                  u13_label));
            } else {
              puts(((const char *)"Unexpected value in cast tree"));
              exit(-1);
              return 0;
            }
          }
        }
      }
    } else {
      if (u11_type1 == 15) {
        if (7 == u12_type2) {
          u109_tmp_value = (u10_val << 3);
          return (u109_tmp_value + 1);
        } else {
          puts(((const char *)u13_label));
          exit(-1);
          return 0;
        }
      } else {
        if (u11_type1 == 23) {
          if (7 == u12_type2) {
            u110_tmp_value = (u10_val << 3);
            return (u110_tmp_value + 7);
          } else {
            puts(((const char *)u13_label));
            exit(-1);
            return 0;
          }
        } else {
          if (u11_type1 == 31) {
            if (7 == u12_type2) {
              u59_dyn_box_init = u10_val;
              u60_dyn_box_init = 31;
              u61_dyn_box =
                  (long)(posix_memalign(&alloc_ptr, 8, 8 * 2), alloc_ptr);
              ((long *)u61_dyn_box)[0] = u59_dyn_box_init;
              ((long *)u61_dyn_box)[1] = u60_dyn_box_init;
              return u61_dyn_box;
            } else {
              puts(((const char *)u13_label));
              exit(-1);
              return 0;
            }
          } else {
            u25_tag1 = (u11_type1 & 7);
            if (0 == u25_tag1) {
              if (7 == u12_type2) {
                u62_dyn_box_init = u10_val;
                u63_dyn_box_init = u11_type1;
                u64_dyn_box =
                    (long)(posix_memalign(&alloc_ptr, 8, 8 * 2), alloc_ptr);
                ((long *)u64_dyn_box)[0] = u62_dyn_box_init;
                ((long *)u64_dyn_box)[1] = u63_dyn_box_init;
                return u64_dyn_box;
              } else {
                u27_tag2 = (u12_type2 & 7);
                if (u27_tag2 == 0) {
                  u46_tmp_clos = ((long *)u10_val)[1];
                  u111_tmp_value = ((long *)u46_tmp_clos)[0];
                  return ((
                      (long (*)(long, long, long, long, long))u111_tmp_value)(
                      u46_tmp_clos, u10_val, u11_type1, u12_type2, u13_label));
                } else {
                  puts(((const char *)u13_label));
                  exit(-1);
                  return 0;
                }
              }
            } else {
              if (1 == u25_tag1) {
                if (7 == u12_type2) {
                  u65_dyn_box_init = u10_val;
                  u66_dyn_box_init = u11_type1;
                  u67_dyn_box =
                      (long)(posix_memalign(&alloc_ptr, 8, 8 * 2), alloc_ptr);
                  ((long *)u67_dyn_box)[0] = u65_dyn_box_init;
                  ((long *)u67_dyn_box)[1] = u66_dyn_box_init;
                  return u67_dyn_box;
                } else {
                  u32_tag_gref = (u12_type2 & 7);
                  if (u32_tag_gref == 1) {
                    u112_tmp_value = (u11_type1 ^ 1);
                    u33_g1 = ((long *)u112_tmp_value)[0];
                    u113_tmp_value = (u12_type2 ^ 1);
                    u34_g2 = ((long *)u113_tmp_value)[0];
                    u69_for = u10_val;
                    u70_from = u33_g1;
                    u71_to = u34_g2;
                    u72_blames = u13_label;
                    u68_gproxy =
                        (long)(posix_memalign(&alloc_ptr, 8, 8 * 4), alloc_ptr);
                    ((long *)u68_gproxy)[0] = u69_for;
                    ((long *)u68_gproxy)[1] = u70_from;
                    ((long *)u68_gproxy)[2] = u71_to;
                    ((long *)u68_gproxy)[3] = u72_blames;
                    return (u68_gproxy | 1);
                  } else {
                    puts(((const char *)u13_label));
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
