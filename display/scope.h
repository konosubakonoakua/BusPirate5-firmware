#ifndef _SCOPE_H_
#define _SCOPE_H_
uint32_t scope_setup(void);
uint32_t scope_setup_exc(void);
void scope_cleanup(void);
void scope_settings(void);
void scope_help(void);
uint32_t scope_commands(struct opt_args *args, struct command_result *result);
uint32_t scope_periodic(void);
void scope_lcd_update(uint32_t flags);
extern volatile uint8_t scope_running;

#endif


