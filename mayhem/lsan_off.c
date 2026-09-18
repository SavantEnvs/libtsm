/* Disable LeakSanitizer at build time (SPEC.md §6.2 item 15). ASan/UBSan stay fully
 * active; only leak detection is turned off, so leak reports stop drowning out the
 * memory-safety defects (buffer overflows, UAF, UB) this fleet actually fuzzes for. */
int __lsan_is_turned_off(void) {
  return 1;
}
