#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void __fastcall bootloader_gpio_setup();
bool __cdecl is_enter_firmware_response();
void __fastcall receive_1k_packet_and_validate(int a1, int a2, int a3, int a4, int a5);
void __cdecl drop_first_rx_buffer_byte();
void __fastcall tx_command(char a1, char a2);
int __fastcall xtea_encrypt_decrypt(char *buffer, int pos_encrypt_neg_decrypt, char *key, int a4, int a5, int a6, int a7, int a8, unsigned int *a9, unsigned int *a10);
void __fastcall decrypt_32_byte_block(int block_index);
int __fastcall get_or_set_RCC_AHBENR(int result, int);
void __fastcall get_or_set_RCC_APB2ENR(int result, int);
GPIO_PORT_STRUCT *__fastcall set_port_config(GPIO_PORT_STRUCT *port, struc_20000A30 *config);
void __fastcall init_gpio_struc(struc_20000A30 *result);
void __fastcall setup_usart_bootloader(int, int *);
_DWORD *__fastcall init_usart_data(_DWORD *result);
void __fastcall en_or_dis_USART1(int *result, int);
int __fastcall tx_byte(int result, __int16);
int __fastcall rx_byte(int);
BOOL __fastcall is_tx40_or_rx20_status(int, int);
void __fastcall wait_x_loops(int result);
void __fastcall flash_write_serial_data_1k(void *dst);
void __fastcall xtea_divide(int, int);
char *__fastcall memcpy(char *dst, char *src, unsigned int size);
int *unlock_flash();
int __fastcall flash_erase_page(void *page_ptr);
int __fastcall flash_write_word_0(_WORD *, __int16);
int __fastcall mb_wait_for_flash_ready(int);
void __cdecl init_hw_and_read_configs();
void __cdecl update_auto_calibrate_adc_4_5_6_8();
int __fastcall sub_80019E4(int, int);
int *__fastcall set_tim1_ccr1_ccr2_ccr3(int);
void __cdecl sub_800222C();
void __cdecl sub_80028AC();
void __cdecl somthing_with_break_and_not_break();
void copy_config_type_1_to_flash();
void __cdecl copy_config_type_1_to_ram_and_validate();
void copy_config_type_2_to_flash();
void __cdecl sub_8003018();
char *sub_8003214();
char *sub_800321E();
void *sub_8003238();
int __fastcall some_struct_fill(unsigned int *a1);
void __fastcall sub_80033D6(int result, int);
int __fastcall RCC_APB2ENR_clear_or_set(int result, int);
void __fastcall sub_80033FE(int result, int);
bool __fastcall was_reset_by_software_reason(unsigned int mask);
void __fastcall init_port(GPIO_PORT_STRUCT *a1, struc_20000A30 *a2);
struc_20000A30 *__fastcall init_struc_20000A30(struc_20000A30 *result);
void __fastcall set_GPIO_pin(GPIO_PORT_STRUCT *port, int bits);
void __fastcall reset_GPIO_pin(GPIO_PORT_STRUCT *result, __int16 a2);
_WORD *__fastcall stop_or_start_timer(int, int);
void __fastcall init_NVIC(unsigned __int8 *);
void sub_8003728();
void sub_80037D8();
int sub_8003860();
_WORD __cdecl mb_some_speed();
int mb_get_speed();
int sub_8003928();
int sub_8003CCA();
int __fastcall sub_8003E04(int, int, int, int);
int __fastcall sub_8003E48(int, int, int, int);
ERROR_BITS_ENUM sub_8003EAC();
char *sub_80044A0();
void __cdecl sub_80044C8();
void __cdecl sub_80044D0();
int sub_80044E2();
void __cdecl update_error_bits_bit_1_is_set();
void __fastcall init_HALL_configuration_and_UVW_settings(int);
void __cdecl sub_8004510();
BOOL sub_8004520();
char *mb_init_stuff();
void __cdecl set_is_over_volt_error_bits();
void __fastcall set_error_bit(int);
void __cdecl init_some_temp_and_batt_values();
void __cdecl sub_80049D0();
void __fastcall sub_8004A8C();
int mb_is_over_under_volt();
int seems_bad();
void __cdecl blink_error_codes_on_PB2_led();
void __cdecl some_mode_or_gear_handling_1();
int sub_800500C();
int __fastcall PB11_serial_get_next_bit();
void __fastcall PB11_build_serial_package();
void __cdecl init_selected_gear_mode();
int __fastcall divide_0(signed int, signed int);
int __fastcall mb_divide(unsigned int, unsigned int);
void nullsub_2_0();
void __cdecl sub_8005582();
void __cdecl mb_init_max_amp();
void __cdecl sub_800564C();
void __fastcall sub_80056A8(int a1);
void __cdecl update_selected_gear_mode();
void __cdecl some_mode_switch_handling_2();
void __cdecl check_for_secret_profile_change();
// void __usercall sub_8005A70();
unsigned int __fastcall sub_8005ACE();
void __cdecl mb_setup_uart();
void __fastcall rx_byte_0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
void poll_tx_buffer();
void __cdecl update_counter_1();
void __fastcall rx_buffer_command_handler();
void sub_8006074();
void __cdecl poll_PC15_CAN_H_PIN15();
void __fastcall hmm_two_same_kind_lists_sub_8006124(int, int);
int __fastcall sub_8006150(int, int, __int16 *, int);
void __cdecl sub_800625C();
void __cdecl sub_8006274();
__int16 __fastcall sub_80062A4(__int16 result, __int16);
__int16 __fastcall sub_80062AC(__int16 result, __int16);
void __cdecl ping_wdt();
void __cdecl start_wdt();
int *unlock_flash_0();
void __cdecl lock_flash_0();
int __fastcall flash_erase_page_0(int page_ptr);
int __fastcall flash_write_word(_WORD *flash_ptr, __int16 data);
int __fastcall mb_wait_for_flash_ready_0(int);
void __cdecl mb_setup_systick();
void __fastcall set_count_down_timer_7(__int16 result);
BOOL is_count_down_timer_7_zero();
void __fastcall set_count_down_uart_poll_timer_3(__int16 result);
BOOL is_count_down_uart_poll_timer_3_zero();
void __fastcall set_count_down_timer_2(char result);
BOOL is_count_down_timer_2_zero();
bool __cdecl is_count_down_timer_4_zero();
int count_down_timer_5_timed_out_100_ms();
int count_down_timer_6_timed_out_1000_ms();
void nullsub_1();
int __fastcall mb_usart_setup(unsigned int *a1, usart_struct *a2);
int *__fastcall mb_bit_set_or_clear(int *result, int);
void __fastcall tx_byte_0(int result, unsigned __int8 a2);
int __fastcall rx_9_bits(int usart_base);
BOOL __fastcall is_tx40_or_rx20_status_0(int, int);
void __fastcall set_USART_ICR_bit(int usart_base, int a2);
void __cdecl init_ports();
void __cdecl setup_wdt();
bool __cdecl validate_device_id();
void __fastcall mb_setup_clock();
void update_SYSCFG_CFGR2_0();
void __fastcall update_SYSCFG_CFGR2(int);
void __fastcall usart_enable();
void __cdecl sub_8007566();
void nullsub_2();
void __cdecl sub_8007584();
void __fastcall sub_800759C(int);
void __fastcall setup_power_mode(int clear_or_set);
void __fastcall sub_80075C8(int *);
void __fastcall set_EXTI_PR(int result);
void __fastcall __noreturn break_loop_1();
void __fastcall __noreturn break_loop_0();

//-------------------------------------------------------------------------
// Data declarations

_UNKNOWN unk_00000000; // weak
_UNKNOWN unk_00000001; // weak
_UNKNOWN unk_00000002; // weak
_UNKNOWN unk_00000003; // weak
_UNKNOWN unk_00000004; // weak
_UNKNOWN unk_00000005; // weak
_UNKNOWN unk_00000008; // weak
_UNKNOWN unk_00000018; // weak
_UNKNOWN unk_000000A5; // weak
_UNKNOWN unk_00000500; // weak
int controller_main_ivt[] = { 536873664 }; // weak
_BYTE byte_8007658[8] = { 3, 3, 1, 1, 2, 2, 0, 0 }; // weak
_BYTE byte_8007660[8] = { 2, 1, 3, 2, 1, 3, 0, 0 }; // weak
_BYTE byte_8007928[8] = { 1, 1, 0, 0, 1, 0, 0, 0 }; // weak
_BYTE byte_8007930[8] = { 0, 1, 0, 0, 1, 1, 0, 0 }; // weak
_UNKNOWN unk_800EFFF; // weak
struc_config_type_1 config_type_1 = { '\0', '\x9F', 42405u, 10111, 25471, 7296, -19646, -1, 256, '\xFF', '\xFF' };
struc_config_type_2 config_type_2 = { -32512, -23131, -18945, 128 };
char ram_start_and_xtea_crypto_key[17] = "LingXiang-64Soft"; // weak
char start_of_bss[123] =
{
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\x94',
  '\x11',
  '\0',
  '\0',
  'V',
  '\xD5',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0'
}; // weak
_UNKNOWN unk_200000C2; // weak
_UNKNOWN unk_200000CA; // weak
_UNKNOWN byte_200000CB; // weak
__int16 word_200000E2 = 0; // weak
__int16 word_200000EC = 0; // weak
__int16 word_200000EE = 0; // weak
__int16 word_200000F0 = 0; // weak
unsigned __int16 word_200000F4 = 0u; // weak
struc_20000130 stru_20000130 =
{
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0'
}; // weak
char byte_20000194 = '\0'; // weak
char byte_20000195 = '\0'; // weak
_UNKNOWN unk_20000196; // weak
_UNKNOWN U_V_W_setting; // weak
unsigned __int8 byte_20000198[3] = { 2u, 50u, 50u }; // weak
bool default_configuration_used = false;
char byte_2000019D = '\0'; // weak
char byte_2000019E = '\0'; // weak
unsigned __int16 word_200001A4[3] = { 0u, 0u, 0u }; // weak
__int16 word_200001AA[2] = { 0, 0 }; // weak
_UNKNOWN unk_200001B0; // weak
_UNKNOWN unk_200001B2; // weak
_UNKNOWN unk_200001B4; // weak
unsigned __int16 word_200001C8 = 0u; // weak
_UNKNOWN word_200001CA; // weak
int U_V_W[3] = { 0, 0, 0 }; // weak
_UNKNOWN unk_200001E8; // weak
_UNKNOWN dword_200001EC; // weak
char byte_200001F4 = '\0'; // weak
unsigned __int16 word_200001FE = 0u; // weak
__int16 word_20000204 = 0; // weak
struc_20000244 RS485 =
{
  '\0',
  'd',
  '\0',
  '\0',
  '\0',
  '\x01',
  '\0',
  0u,
  0u,
  '\0',
  '\x01',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\x01',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  0u,
  0u,
  0u,
  0u,
  0,
  0u,
  0u,
  0,
  '\0',
  '\0',
  0,
  0
}; // weak
_BYTE byte_200002B4[16] = { 0, 0, 0, 0, 1, 2, 3, 4, 1, 2, 3, 4, 6, 7, 8, 9 }; // weak
char byte_200002D0 = '\0'; // weak
_UNKNOWN unk_200002D1; // weak
char use_limit_17_35_for_1_or_17_20 = '\x01'; // weak
_UNKNOWN unk_200002D3; // weak
_UNKNOWN unk_200002D4; // weak
__int16 word_200002D6 = 0; // weak
_UNKNOWN unk_200002D8; // weak
__int16 word_200002E0 = 0; // weak
__int16 word_200002E2 = 0; // weak
_UNKNOWN unk_200002E4; // weak
__int16 word_20000318 = 0; // weak
__int16 mb_max_amp_2[2] = { 0, 0 }; // weak
__int16 word_2000031E = 0; // weak
char rx_buffer[64] =
{
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0'
}; // weak
char tx_buffer[64] =
{
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0',
  '\0'
}; // weak
__int16 word_200003C4 = 0; // weak
__int16 word_200003DC = 0; // weak
__int16 word_200003F4 = 0; // weak
_UNKNOWN unk_200003F6; // weak
int dword_200003F8 = 0; // weak
int dword_200003FC = 0; // weak
int byte_20000400[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; // weak
int unk_20000404[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; // weak
_UNKNOWN unk_20000408; // weak
struc_config_type_1 runtime_config_type_1 = { '\0', '\0', 0u, 0, 0, 0, 0, 0, 0, '\0', '\0' };
__int16 mb_max_amp = 0; // weak
__int16 word_20000454 = 0; // weak
_UNKNOWN unk_20000456; // weak
__int16 word_20000458 = 0; // weak
_UNKNOWN unk_2000045A; // weak
__int16 word_2000045C = 0; // weak
__int16 word_2000045E = 0; // weak
_DWORD dword_20000460 = 0; // weak
int hmm_dword_20000474[2] = { 0, 0 }; // weak
struc_config_type_2 runtime_config_type_2 = { 0, 0, 0, 0 };
ERROR_BITS_ENUM error_bits = 0;
__int16 word_200004A4[2] = { 0, 0 }; // weak
_WORD word_200004A8[3] = { 0, 0, 0 }; // weak
char usart_is_initialized = '\0'; // weak
char main_loop_state = '\0'; // weak
char byte_200004B2 = '\0'; // weak
char is_wdt_enabled = '\0'; // weak
char byte_200004B6 = '\0'; // weak
char config_type_2_updated = '\0'; // weak
char config_updated = '\0'; // weak
unsigned __int8 serial_buffer[1027] =
{
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u
};
unsigned __int16 serial_buffer_index = 0u;
struc_20000A30 gpio_struc = { 0, '\0', '\0', 0 }; // idb
_DWORD usart_data[6] = { 0, 0, 0, 0, 0, 0 }; // weak
__int16 local_pos = 0; // weak
char local_checksum = '\0'; // weak
int TIM1_CR1; // weak
int TIM1_CCR1; // weak
int TIM1_CCR2; // weak
int TIM1_CCR3; // weak
unsigned int USART1_CR1;
int RCC_CFGR; // weak
int RCC_AHBRSTR; // weak
int RCC_CFGR2; // weak
int RCC_CFGR3; // weak
int Flash_CR; // weak
int Flash_AR; // weak
GPIO_PORT_STRUCT GPIO_A; // weak
GPIO_PORT_STRUCT GPIO_B;
GPIO_PORT_STRUCT GPIO_C;
GPIO_PORT_STRUCT GPIO_F;
int SCB_AIRCR; // weak


//----- (080000C2) --------------------------------------------------------
_DWORD *__fastcall calls_reset_functions_2_does_memcpy(int *a1)
{
    int v1; // r9
    int v2; // r2
    _DWORD *result; // r0
    _DWORD *v4; // r3
    _DWORD *v5; // r4

    while ( 1 )
    {
        v2 = *a1;
        result = a1 + 1;
        if ( !v2 )
        {
            break;
        }
        v4 = (_DWORD *)((char *)result + *result);
        v5 = (_DWORD *)result[1];
        a1 = result + 2;
        if ( ((unsigned __int8)v5 & 1) != 0 )
        {
            v5 = (_DWORD *)((char *)v5 + v1 - 1);
        }
        do
        {
            *v5++ = *v4++;
            v2 -= 4;
        }
        while ( v2 );
    }
    return result;
}
// 80000DC: variable 'v1' is possibly undefined

//----- (08000200) --------------------------------------------------------
void __fastcall bootloader_gpio_setup()
{
    get_or_set_RCC_AHBENR(0x460000, 1);
    // Reset PA8, PA9 & PA10
    LOWORD(GPIO_A.BRR) = 0x700;                 // 0b111 0000 0000
    init_gpio_struc(&gpio_struc);
    gpio_struc.bits = 0x700;
    gpio_struc.type = 1;
    gpio_struc.speed = 1;
    gpio_struc.pullup_type = 0;
    set_port_config(&GPIO_A, &gpio_struc);
    GPIO_B.BSRR = 0xE000;
    gpio_struc.bits = 0xE000;
    set_port_config(&GPIO_B, &gpio_struc);
    LOWORD(GPIO_B.BRR) = 4;
    init_gpio_struc(&gpio_struc);
    gpio_struc.bits = 4;
    gpio_struc.type = 1;
    gpio_struc.speed = 2;
    gpio_struc.pullup_type = 0;
    set_port_config(&GPIO_B, &gpio_struc);
    LOWORD(GPIO_F.BRR) = 64;
    gpio_struc.bits = 64;
    gpio_struc.type = 1;
    gpio_struc.speed = 2;
    gpio_struc.pullup_type = 0;
    set_port_config(&GPIO_F, &gpio_struc);
    get_or_set_RCC_APB2ENR(0x4000, 1);
    gpio_struc.bits = 192;
    gpio_struc.speed = 3;
    gpio_struc.type = 2;
    gpio_struc.pullup_type = 256;
    set_port_config(&GPIO_B, &gpio_struc);
    init_usart_data(usart_data);
    usart_data[0] = 115200;
    setup_usart_bootloader((int)&USART1_CR1, usart_data);
    en_or_dis_USART1((int *)&USART1_CR1, 1);
}
// 20000A38: using guessed type _DWORD usart_data[6];
// 48000000: using guessed type GPIO_PORT_STRUCT GPIO_A;

//----- (080002C2) --------------------------------------------------------
bool __cdecl is_enter_firmware_response()
{
    is_tx40_or_rx20_status((int)&USART1_CR1, 0x20);
    JUMPOUT(0x80002CE);
}
// 80002CA: fixed broken macro-insn
// 80002CA: control flows out of bounds to 80002CE

//----- (08000312) --------------------------------------------------------
void __fastcall receive_1k_packet_and_validate(int a1, int a2, int a3, int a4, int a5)
{
    unsigned __int8 new_rx_byte; // r0
    unsigned __int16 index; // r3
    int pos; // r3
    unsigned __int8 checksum; // r2
    unsigned __int8 *ptr; // r4

    if ( is_tx40_or_rx20_status((int)&USART1_CR1, 0x20) )
    {
        new_rx_byte = rx_byte((int)&USART1_CR1);
        index = serial_buffer_index;
        serial_buffer[serial_buffer_index] = new_rx_byte;
        serial_buffer_index = index + 1;
        if ( (unsigned __int16)(index + 1) == 1027 )
        {
            // Buffer full
            if ( serial_buffer[0] == 0xE2 )
            {
                LOWORD(pos) = 0;
                checksum = 0;
                ptr = serial_buffer;
                do
                {
                    checksum ^= *((_BYTE *)&unk_00000002 + (_DWORD)ptr) ^ *((_BYTE *)&unk_00000001 + (_DWORD)ptr) ^ *ptr;
                    ptr += 3;
                    pos = (unsigned __int16)(pos + 3);
                }
                while ( pos < 1026 );
                local_pos = pos;
                local_checksum = checksum;
                if ( checksum == serial_buffer[1026] )
                {
                    __asm { POP     {R4-R6,PC}; Pop registers }
                }
                drop_first_rx_buffer_byte();
            }
            drop_first_rx_buffer_byte();
        }
    }
    __asm { POP     {R4-R6,PC}; Pop registers }
}
// 8000380: unbalanced stack, ignored a potential tail call
// 20000A50: using guessed type __int16 local_pos;
// 20000A52: using guessed type char local_checksum;

//----- (08000382) --------------------------------------------------------
void __cdecl shift_rx_buffer_one_byte_left()
{
    int i; // r0
    unsigned __int16 len; // r1

    if ( serial_buffer_index )
    {
        --serial_buffer_index;
        i = 0;
        len = serial_buffer_index;
        while ( i < len )
        {
            serial_buffer[i] = serial_buffer[i + 1];
            i = (unsigned __int8)(i + 1);
        }
    }
}

//----- (080003A6) --------------------------------------------------------
void __fastcall tx_command(char a1, char a2)
{
    unsigned __int8 *v2; // r4
    int v3; // r5

    serial_buffer[3] = 0xE2;
    serial_buffer[2] = a1;
    serial_buffer[1] = a2;
    serial_buffer[0] = a2 ^ a1 ^ 0xE2;
    // PF6 ?
    GPIO_F.BSRR = 0x40;                         // mb assert tx line ?
    wait_x_loops(100);
    v2 = &serial_buffer[3];
    v3 = 4;
    do
    {
        tx_byte((int)&USART1_CR1, *v2);
        while ( !is_tx40_or_rx20_status((int)&USART1_CR1, 0x40) )
        {
            ;
        }
        --v2;
        --v3;
    }
    while ( v3 );
    LOWORD(GPIO_F.BRR) = 64;
}

//----- (08000400) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
int __fastcall xtea_encrypt_decrypt(char *buffer, int pos_encrypt_neg_decrypt, char *key, int a4, int a5, int a6, int a7, int a8, unsigned int *a9, unsigned int *a10)
{
    unsigned int v11; // r6
    unsigned int v12; // r7
    int sum; // r5
    int v14; // r0
    int v15; // r0
    int v16; // r0
    char *v17; // r1
    int v18; // r4
    int v19; // r0
    unsigned int i; // r5
    int v21; // r0
    char *v22; // r1
    unsigned int v24; // [sp+B4h] [bp-5Ch]
    unsigned int v25; // [sp+B4h] [bp-5Ch]
    int v26; // [sp+B8h] [bp-58h]
    char *v27; // [sp+BCh] [bp-54h]

    v27 = &buffer[4 * pos_encrypt_neg_decrypt - 4];
    v11 = *(_DWORD *)v27;
    v12 = *(_DWORD *)buffer;
    sum = 0;
    if ( pos_encrypt_neg_decrypt >= 2 )
    {
        xtea_divide(52, pos_encrypt_neg_decrypt);
        v15 = v14 + 6;
        if ( v15 >= 1 )
        {
            v26 = v15;
            do
            {
                sum -= 0x61C88647;
                v24 = (unsigned int)(sum << 28) >> 30;
                v16 = 0;
                --v26;
                if ( pos_encrypt_neg_decrypt - 1 >= 1 )
                {
                    v17 = buffer;
                    do
                    {
                        v11 = *(_DWORD *)v17
                            + (((*((_DWORD *)v17 + 1) ^ sum) + (v11 ^ *(_DWORD *)&key[4 * (v24 ^ v16 & 3)])) ^ (((4 * *((_DWORD *)v17 + 1)) ^ (v11 >> 5)) + ((16 * v11) ^ (*((_DWORD *)v17 + 1) >> 3))));
                        *(_DWORD *)v17 = v11;
                        ++v16;
                        v17 += 4;
                    }
                    while ( v16 < pos_encrypt_neg_decrypt - 1 );
                }
                v11 = *(_DWORD *)v27
                    + (((*(_DWORD *)buffer ^ sum) + (v11 ^ *(_DWORD *)&key[4 * (v24 ^ v16 & 3)])) ^ (((4 * *(_DWORD *)buffer) ^ (v11 >> 5)) + ((16 * v11) ^ (*(_DWORD *)buffer >> 3))));
                *a9 = v11;
            }
            while ( a8 );
        }
        return 0;
    }
    if ( pos_encrypt_neg_decrypt < -1 )
    {
        v18 = -pos_encrypt_neg_decrypt;
        xtea_divide(52, -pos_encrypt_neg_decrypt);
        for ( i = 0x9E3779B9 * (v19 + 6); i; i += 0x61C88647 )
        {
            v25 = i << 28 >> 30;
            v21 = v18 - 1;
            if ( v18 - 1 >= 1 )
            {
                v22 = &buffer[4 * v21];
                do
                {
                    v12 = *(_DWORD *)v22
                        - (((v12 ^ i) + (*((_DWORD *)v22 - 1) ^ *(_DWORD *)&key[4 * (v25 ^ v21 & 3)])) ^ (((4 * v12) ^ (*((_DWORD *)v22 - 1) >> 5)) + ((16 * *((_DWORD *)v22 - 1)) ^ (v12 >> 3))));
                    *(_DWORD *)v22 = v12;
                    --v21;
                    v22 -= 4;
                }
                while ( v21 >= 1 );
            }
            v12 = *(_DWORD *)buffer
                - (((v12 ^ i) + (*(_DWORD *)&buffer[4 * v18 - 4] ^ *(_DWORD *)&key[4 * (v25 ^ v21 & 3)])) ^ (((4 * v12) ^ (*(_DWORD *)&buffer[4 * v18 - 4] >> 5)) + ((16 * *(_DWORD *)&buffer[4 * v18 - 4]) ^ (v12 >> 3))));
            *a10 = v12;
        }
        return 0;
    }
    return 1;
}
// 80004BA: positive sp value 34 has been found
// 8000422: variable 'v14' is possibly undefined
// 80004E0: variable 'v19' is possibly undefined

//----- (080005A0) --------------------------------------------------------
void __fastcall decrypt_32_byte_block(int block_index)
{
    char *src; // r4
    int v2; // r3
    int non_random_prefix_size; // r0
    char *packet_ptr; // r1
    char dst[40]; // [sp+0h] [bp-28h] BYREF

    src = (char *)&serial_buffer[32 * block_index];
    memcpy(dst, src + 2, 32u);
    non_random_prefix_size = 0;
    packet_ptr = dst;
    // Ensure that the (encrypted) package contains actual encrypted data
    do
    {
        if ( *packet_ptr && (unsigned __int8)*packet_ptr != 255 )
        {
            break;
        }
        ++non_random_prefix_size;
        if ( packet_ptr[1] )
        {
            if ( (unsigned __int8)packet_ptr[1] != 255 )
            {
                break;
            }
        }
        ++non_random_prefix_size;
        if ( packet_ptr[2] )
        {
            if ( (unsigned __int8)packet_ptr[2] != 255 )
            {
                break;
            }
        }
        ++non_random_prefix_size;
        if ( packet_ptr[3] )
        {
            if ( (unsigned __int8)packet_ptr[3] != 255 )
            {
                break;
            }
        }
        ++non_random_prefix_size;
        packet_ptr += 4;
    }
    while ( non_random_prefix_size < 32 );
    if ( non_random_prefix_size != 32 )
    {
        xtea_encrypt_decrypt(
            dst,
            -8,
            ram_start_and_xtea_crypto_key,
            v2,
            *(int *)dst,
            *(int *)&dst[4],
            *(int *)&dst[8],
            *(int *)&dst[12],
            *(unsigned int **)&dst[16],
            *(unsigned int **)&dst[20]);
        memcpy(src + 2, dst, 0x20u);
    }
}
// 80005FA: variable 'v2' is possibly undefined

//----- (0800062C) --------------------------------------------------------
void __fastcall mb_get_some_rcc_info(unsigned int *a1)
{
    char v2; // r0
    unsigned int v3; // r7
    unsigned int v4; // r7
    unsigned int v5; // r0
    int v6; // r1
    int v7; // r6
    unsigned int v8; // r1
    unsigned int v9; // r2
    unsigned int v10; // r1
    __int16 v11; // r0
    unsigned int v12; // r0
    char v13; // r0
    unsigned int v14; // r0
    char v15; // r0
    unsigned int v16; // r0
    unsigned int v17; // r0
    int v18; // r1
    int v19; // r1
    int v20; // r0

    v2 = RCC_CFGR;
    if ( (v2 & 0xC) == 8 )
    {
        v3 = ((unsigned int)RCC_CFGR >> 18) & 0xF;
        v4 = v3 + 2;
        if ( (RCC_CFGR & 0x10000) != 0 )
        {
            v6 = RCC_CFGR2 & 0xF;
            v5 = divide(8000000u, v6 + 1) * v4;
        }
        else
        {
            v5 = 4000000 * v4;
        }
    }
    else
    {
        v5 = 8000000;
    }
    *a1 = v5;
    v7 = (unsigned __int8)RCC_CFGR >> 4;
    v8 = *a1 >> ram_start_and_xtea_crypto_key[v7 + 16];
    a1[1] = v8;
    v9 = (unsigned int)(RCC_CFGR << 21) >> 29;
    v10 = v8 >> ram_start_and_xtea_crypto_key[v9 + 16];
    a1[2] = v10;
    v11 = RCC_CFGR3;
    if ( (v11 & 0x100) != 0 )
    {
        if ( (RCC_CFGR & 0x4000) != 0 )
        {
            v12 = v10 >> 2;
        }
        else
        {
            v12 = v10 >> 1;
        }
    }
    else
    {
        v12 = 14000000;
    }
    a1[3] = v12;
    v13 = RCC_CFGR3;
    if ( (v13 & 0x40) != 0 )
    {
        v14 = 0x8000;
    }
    else
    {
        v14 = 32786;
    }
    a1[4] = v14;
    v15 = RCC_CFGR3;
    if ( (v15 & 0x10) != 0 )
    {
        v16 = *a1;
    }
    else
    {
        v16 = 8000000;
    }
    a1[5] = v16;
    if ( (RCC_CFGR3 & 3) != 0 )
    {
        v18 = RCC_CFGR3 & 3;
        if ( v18 == 1 )
        {
            v17 = *a1;
        }
        else
        {
            v19 = RCC_CFGR3 & 3;
            if ( v19 == 2 )
            {
                v17 = 0x8000;
            }
            else
            {
                v20 = RCC_CFGR3 & 3;
                if ( v20 != 3 )
                {
                    return;
                }
                v17 = 8000000;
            }
        }
    }
    else
    {
        v17 = a1[2];
    }
    a1[6] = v17;
}
// 40021004: using guessed type int RCC_CFGR;
// 4002102C: using guessed type int RCC_CFGR2;
// 40021030: using guessed type int RCC_CFGR3;

//----- (080006EE) --------------------------------------------------------
int __fastcall get_or_set_RCC_AHBENR(int result, int a2)
{
    bool v2; // zf
    int v3; // r1

    v2 = a2 == 0;
    v3 = RCC_AHBENR;
    if ( v2 )
    {
        RCC_AHBENR = v3 & ~result;
    }
    else
    {
        result |= v3;
        RCC_AHBENR = result;
    }
    return result;
}
// 40021014: using guessed type int RCC_AHBENR;

//----- (08000702) --------------------------------------------------------
void __fastcall get_or_set_RCC_APB2ENR(int result, int a2)
{
    bool v2; // zf
    int v3; // r1

    v2 = a2 == 0;
    v3 = RCC_APB2ENR;
    if ( v2 )
    {
        RCC_APB2ENR = v3 & ~result;
    }
    else
    {
        RCC_APB2ENR = result | v3;
    }
}
// 40021018: using guessed type int RCC_APB2ENR;

//----- (08000738) --------------------------------------------------------
GPIO_PORT_STRUCT *__fastcall set_port_config(GPIO_PORT_STRUCT *port, struc_20000A30 *config)
{
    char bit; // r3
    unsigned int bit_index; // r2
    int type; // r5
    int v5; // r4

    bit = 0;
    for ( bit_index = 0; bit_index < 0x10; ++bit_index )
    {
        if ( (config->bits & (1 << bit_index)) == 1 << bit_index )
        {
            type = (unsigned __int8)config->type;
            if ( type == 1 || type == 2 )
            {
                port->OSPEEDR &= ~(3 << bit);
                port->OSPEEDR |= (unsigned __int8)config->speed << bit;
                LOWORD(port->OTYPER) &= ~(unsigned __int16)(1 << bit_index);
                LOWORD(port->OTYPER) |= LOBYTE(config->pullup_type) << bit_index;
            }
            v5 = ~(3 << bit);
            port->MODER &= v5;
            port->MODER |= (unsigned __int8)config->type << bit;
            port->PUPDR &= v5;
            port->PUPDR |= HIBYTE(config->pullup_type) << bit;
        }
        bit += 2;
    }
    return port;
}

//----- (080007AA) --------------------------------------------------------
void __fastcall init_gpio_struc(struc_20000A30 *result)
{
    result->bits = 0xFFFF;
    result->type = 0;
    result->speed = 2;
    result->pullup_type = 0;
}

//----- (080007C0) --------------------------------------------------------
void __fastcall setup_usart_bootloader(int a1, int *a2)
{
    unsigned int v4; // r0
    int v5; // r1
    unsigned int v6; // r0
    unsigned int v7; // r1
    int v8; // r7
    unsigned int v9; // r0
    unsigned int v10; // r1
    __int16 v11; // r6
    int v12; // r1
    unsigned int v13[12]; // [sp+0h] [bp-30h] BYREF

    *(_DWORD *)a1 &= ~1u;
    *(_DWORD *)(a1 + 4) = a2[2] | *(_DWORD *)(a1 + 4) & 0xFFFFCFFF;
    *(_DWORD *)a1 = a2[4] | a2[3] | a2[1] | *(_DWORD *)a1 & 0xFFFFE9F3;
    *(_DWORD *)(a1 + 8) = a2[5] | *(_DWORD *)(a1 + 8) & 0xFFFFFCFF;
    mb_get_some_rcc_info(v13);
    if ( (unsigned int *)a1 == &USART1_CR1 )
    {
        v4 = v13[6];
    }
    else
    {
        v4 = v13[2];
    }
    v5 = *a2;
    v6 = 25 * v4;
    if ( (*(_DWORD *)a1 & 0x8000) != 0 )
    {
        v7 = 2 * v5;
    }
    else
    {
        v7 = 4 * v5;
    }
    v8 = divide(v6, v7);
    v9 = 16 * divide(v8, 0x64u);
    v10 = v8 - 100 * (v9 >> 4);
    v11 = v9;
    if ( (*(_DWORD *)a1 & 0x8000) != 0 )
    {
        v12 = divide(8 * v10 + 50, 0x64u) & 7;
    }
    else
    {
        v12 = divide(16 * v10 + 50, 0x64u) & 0xF;
    }
    *(_WORD *)(a1 + 12) = v12 | v11;
}

//----- (0800086A) --------------------------------------------------------
_DWORD *__fastcall init_usart_data(_DWORD *result)
{
    *result = 9600;
    result[1] = 0;
    result[2] = 0;
    result[3] = 0;
    result[4] = 12;
    result[5] = 0;
    return result;
}

//----- (08000880) --------------------------------------------------------
void __fastcall en_or_dis_USART1(int *result, int a2)
{
    bool v2; // zf
    int v3; // r1

    v2 = a2 == 0;
    v3 = *result;
    if ( v2 )
    {
        *result = v3 & 0xFFFFFFFE;
    }
    else
    {
        *result = v3 | 1;
    }
}

//----- (08000896) --------------------------------------------------------
int __fastcall tx_byte(int result, __int16 a2)
{
    *(_WORD *)(result + 40) = a2 & 0x1FF;
    return result;
}

//----- (0800089E) --------------------------------------------------------
int __fastcall rx_byte(int a1)
{
    return *(_WORD *)(a1 + 36) & 0x1FF;
}

//----- (080008B8) --------------------------------------------------------
BOOL __fastcall is_tx40_or_rx20_status(int a1, int a2)
{
    return (a2 & *(_DWORD *)(a1 + 28)) != 0;
}

//----- (080008C8) --------------------------------------------------------
void __fastcall wait_x_loops(int result)
{
    do
    {
        --result;
    }
    while ( result );
}

//----- (080008CE) --------------------------------------------------------
bool __fastcall is_same_1_k(char *dst)
{
    int i; // r1
    char *src; // r2

    i = 0;
    src = (char *)&serial_buffer[2];
    do
    {
        if ( *dst != *src || dst[1] != src[1] || dst[2] != src[2] || dst[3] != src[3] )
        {
            return 0;
        }
        i += 4;
        src += 4;
        dst += 4;
    }
    while ( i < 1024 );
    return 1;
}

//----- (0800090C) --------------------------------------------------------
void __fastcall flash_write_serial_data_1k(void *dst)
{
    _R0 = 1;
    __asm { MSR.W   PRIMASK, R0; Transfer Register to PSR }
    unlock_flash();
    flash_erase_page(dst);
    flash_write_word_0(dst, *(__int16 *)&serial_buffer[2]);
    JUMPOUT(0x800092E);
}
// 800092A: fixed broken macro-insn
// 800092A: control flows out of bounds to 800092E

//----- (08000942) --------------------------------------------------------
bool __cdecl is_firmware_bad()
{
    int sum; // r4
    int xor; // r1
    int *ptr; // r2
    int left; // r3

    sum = 0;
    xor = 0;
    ptr = controller_main_ivt;
    left = 0x1BF8;
    do
    {
        sum += *ptr + ptr[1];
        xor ^= ptr[1] ^ *ptr;
        ptr += 2;
        --left;
    }
    while ( left );
    return 0;
}
// 8001000: using guessed type int controller_main_ivt[];

//----- (080009BC) --------------------------------------------------------
void __fastcall xtea_divide(int a1, int a2)
{
    int v2; // r0
    void (__fastcall *v3)(int); // r12
    unsigned int v4; // r0
    int v5; // r0
    int v6; // r1
    void (__fastcall *v7)(int, int); // r12
    int v8; // r0
    int v9; // r1
    void (__fastcall *v10)(int, int); // r12

    // Both > 0
    if ( (a1 | a2) >= 0 )
    {
        divide(a1, a2);
    }
    else if ( a1 < 0 )
    {
        v4 = -a1;
        if ( a2 < 0 )
        {
            v8 = divide(v4, -a2);
            v10(v8, -v9);
        }
        else if ( a2 )
        {
            v5 = divide(v4, a2);
            v7(-v5, -v6);
        }
        else
        {
            nullsub_8000A68();
        }
    }
    else
    {
        v2 = divide(a1, -a2);
        v3(-v2);
    }
}
// 800099E: variable 'v3' is possibly undefined
// 80009B0: variable 'v7' is possibly undefined
// 80009AE: variable 'v6' is possibly undefined
// 80009BA: variable 'v10' is possibly undefined
// 80009B8: variable 'v9' is possibly undefined

//----- (080009C2) --------------------------------------------------------
int __fastcall divide(unsigned int a1, unsigned int a2)
{
    int v2; // r2
    unsigned int v3; // r3
    int result; // r0
    char v5; // cf
    int v6; // r2
    bool v7; // cf
    int v8; // r2
    bool v9; // cf
    int v10; // r2
    bool v11; // cf
    bool v12; // cf
    int v13; // r2
    bool v14; // cf
    int v15; // r2
    bool v16; // cf
    int v17; // r2
    bool v18; // cf
    int v19; // off

    v2 = 0;
    v3 = a1 >> 8;
    if ( a1 >> 8 >= a2 )
    {
        a2 <<= 8;
        if ( !a2 )
        {
            nullsub_8000A68();
            return result;
        }
        v2 = 0xFF000000;
        if ( v3 >= a2 )
        {
            v2 = 0xFFFF0000;
            a2 <<= 8;
            if ( v3 >= a2 )
            {
                v2 = 0xFFFFFF00;
                a2 <<= 8;
            }
        }
        if ( a1 >> 4 >= a2 )
        {
            goto LABEL_13;
        }
    }
    else
    {
        if ( a1 >> 4 >= a2 )
        {
            goto LABEL_13;
        }
        if ( a1 >> 1 < a2 )
        {
            return a1 >= a2;
        }
    }
    while ( 1 )
    {
        v12 = a1 >> 3 >= a2;
        if ( a1 >> 3 >= a2 )
        {
            v12 = a1 >= 8 * a2;
            a1 -= 8 * a2;
        }
        v13 = v2 + v12 + v2;
        v14 = a1 >> 2 >= a2;
        if ( a1 >> 2 >= a2 )
        {
            v14 = a1 >= 4 * a2;
            a1 -= 4 * a2;
        }
        v15 = v13 + v14 + v13;
        v16 = a1 >> 1 >= a2;
        if ( a1 >> 1 >= a2 )
        {
            v16 = a1 >= 2 * a2;
            a1 -= 2 * a2;
        }
        v17 = v15 + v16 + v15;
        v18 = a1 >= a2;
        if ( a1 >= a2 )
        {
            v18 = 1;
            a1 -= a2;
        }
        v19 = v18 + v17;
        v5 = __CFADD__(v18, v17) | __CFADD__(v17, v19);
        v2 = v17 + v19;
        if ( !v5 )
        {
            break;
        }
        a2 >>= 8;
LABEL_13:
        v5 = a1 >> 7 >= a2;
        if ( a1 >> 7 >= a2 )
        {
            v5 = a1 >= a2 << 7;
            a1 -= a2 << 7;
        }
        v6 = v2 + v5 + v2;
        v7 = a1 >> 6 >= a2;
        if ( a1 >> 6 >= a2 )
        {
            v7 = a1 >= a2 << 6;
            a1 -= a2 << 6;
        }
        v8 = v6 + v7 + v6;
        v9 = a1 >> 5 >= a2;
        if ( a1 >> 5 >= a2 )
        {
            v9 = a1 >= 32 * a2;
            a1 -= 32 * a2;
        }
        v10 = v8 + v9 + v8;
        v11 = a1 >> 4 >= a2;
        if ( a1 >> 4 >= a2 )
        {
            v11 = a1 >= 16 * a2;
            a1 -= 16 * a2;
        }
        v2 = v10 + v11 + v10;
    }
    return v2;
}

//----- (08000A68) --------------------------------------------------------
void nullsub_8000A68()
{
    ;
}

//----- (08000A70) --------------------------------------------------------
char *__fastcall memcpy(char *dst, char *src, unsigned int size)
{
    char ch; // r3 MAPDST
    bool v6; // cf
    unsigned int i; // r2
    int v8; // r3
    int v9; // r4
    int v10; // r5
    int v11; // r6
    int v12; // r3
    int v13; // r4
    int v14; // r3
    bool v15; // nf
    int v16; // r2

    if ( size )
    {
        // Copy first 4 bytes
        while ( (_DWORD)src << 30 )
        {
            ch = *src++;
            *dst++ = ch;
            if ( size-- <= 1 )
            {
                return dst;
            }
        }
        if ( (_DWORD)dst << 30 )
        {
            do
            {
                ch = *src++;
                *dst++ = ch;
                --size;
            }
            while ( size );
        }
        else
        {
            v6 = size >= 0x10;
            for ( i = size - 16; v6; dst += 16 )
            {
                v8 = *(_DWORD *)src;
                v9 = *((_DWORD *)src + 1);
                v10 = *((_DWORD *)src + 2);
                v11 = *((_DWORD *)src + 3);
                src += 16;
                v6 = i >= 0x10;
                i -= 16;
                *(_DWORD *)dst = v8;
                *((_DWORD *)dst + 1) = v9;
                *((_DWORD *)dst + 2) = v10;
                *((_DWORD *)dst + 3) = v11;
            }
            if ( __CFSHL__(i, 29) )
            {
                v12 = *(_DWORD *)src;
                v13 = *((_DWORD *)src + 1);
                src += 8;
                *(_DWORD *)dst = v12;
                *((_DWORD *)dst + 1) = v13;
                dst += 8;
            }
            if ( (i & 4) != 0 )
            {
                v14 = *(_DWORD *)src;
                src += 4;
                *(_DWORD *)dst = v14;
                dst += 4;
            }
            v6 = __CFSHL__(i, 31);
            v16 = i << 31;
            v15 = v16 < 0;
            if ( v6 )
            {
                *(_WORD *)dst = *(_WORD *)src;
                src += 2;
                dst += 2;
                v15 = v16 < 0;
            }
            if ( v15 )
            {
                *dst = *src;
            }
        }
    }
    return dst;
}

//----- (08000ACC) --------------------------------------------------------
int *unlock_flash()
{
    int *result; // r0
    char v1; // r1

    result = &Flash_KEYR;
    v1 = Flash_CR;
    if ( (v1 & 0x80) != 0 )
    {
        Flash_KEYR = 0x45670123;
        Flash_KEYR = 0xCDEF89AB;
    }
    return result;
}
// 40022004: using guessed type int Flash_KEYR;
// 40022010: using guessed type int Flash_CR;

//----- (08000ADE) --------------------------------------------------------
int *lock_flash()
{
    int *result; // r0
    int v1; // r1

    result = &Flash_CR;
    v1 = Flash_CR;
    Flash_CR = v1 | 0x80;
    return result;
}
// 40022010: using guessed type int Flash_CR;

//----- (08000AEA) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
int __fastcall flash_erase_page(void *page_ptr)
{
    int result; // r0
    int v3; // r0
    unsigned int v4; // r1

    result = mb_wait_for_flash_ready(0xB0000);
    if ( result == 4 )
    {
        v3 = Flash_CR;
        Flash_CR = v3 | 2;
        Flash_AR = (int)page_ptr;
        Flash_CR = v3 | 0x42;
        result = mb_wait_for_flash_ready(0xB0000);
        v4 = Flash_CR & 0xFFFFFFFD;
        Flash_CR = v4;
    }
    return result;
}
// 8000AF0: positive sp value 84 has been found
// 40022010: using guessed type int Flash_CR;
// 40022014: using guessed type int Flash_AR;

//----- (08000B20) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
int __fastcall flash_write_word_0(_WORD *a1, __int16 a2)
{
    int result; // r0
    int v5; // r0
    unsigned int v6; // r1

    result = mb_wait_for_flash_ready(0xB0000);
    if ( result == 4 )
    {
        v5 = Flash_CR;
        Flash_CR = v5 | 1;
        *a1 = a2;
        result = mb_wait_for_flash_ready(0xB0000);
        v6 = Flash_CR & 0xFFFFFFFE;
        Flash_CR = v6;
    }
    return result;
}
// 8000B28: positive sp value 7C has been found
// 40022010: using guessed type int Flash_CR;

//----- (08000B64) --------------------------------------------------------
int __fastcall mb_wait_for_flash_ready(int a1)
{
    int result; // r0
    char v3; // r5

    result = 4;
    v3 = Flash_SR;
    if ( (v3 & 1) != 0 )
    {
        result = 1;
    }
    else if ( (Flash_SR & 0x10) != 0 )
    {
        result = 2;
    }
    else if ( (Flash_SR & 4) != 0 )
    {
        result = 3;
    }
    while ( result == 1 )
    {
        if ( !a1 )
        {
            return 5;
        }
        result = 4;
        if ( (Flash_SR & 1) != 0 )
        {
            result = 1;
        }
        else if ( (Flash_SR & 0x10) != 0 )
        {
            result = 2;
        }
        else if ( (Flash_SR & 4) != 0 )
        {
            result = 3;
        }
        --a1;
    }
    if ( a1 )
    {
        return result;
    }
    return 5;
}
// 4002200C: using guessed type int Flash_SR;

//----- (08000BC8) --------------------------------------------------------
void __fastcall __noreturn boot_loader_main()
{
    int retry_50000_times; // r5
    CMD_2 resp_status; // r1
    char resp_page_id; // r0
    int page_id; // r5
    int i; // r6
    int flash_section_bits; // [sp+0h] [bp-28h]
    int is_config_2_data; // [sp+4h] [bp-24h]

    retry_50000_times = 50000;
    bootloader_gpio_setup();

    // Bootloader says Hello
    tx_command(0x80, 0x70);
    serial_buffer_index = 0;
    while ( !is_enter_firmware_response() )
    {
        if ( !--retry_50000_times )
        {
            if ( !is_firmware_bad() )
            {
                dword_20000A2C = (int)controller_main_reset;
                dword_20000A28 = (int)controller_main_reset;
                _R0 = controller_main_stackpointer;
                __asm { MSR.W   MSP, R0; Transfer Register to PSR }
                controller_main_reset();
            }
            // Failed, LED on loop
            while ( 1 )
            {
                GPIO_B.BSRR = 4;
            }
        }
    }

    // Firmware updater says "Hello with parameter"
    // bit 0 = config 1
    // bit 1 = unused config
    // bit 2 = config 2
    flash_section_bits = serial_buffer[2];

    // Bootloader says "Ready to recieve"
    tx_command(0x81, 0x70);

    serial_buffer_index = 0;
    // Feature bit 2 = CONFIG DATA
    is_config_2_data = flash_section_bits >> 2;
    while ( 1 )
    {
        while ( receive_1k_packet_and_validate() != 1 )
        {
            ;
        }
        serial_buffer_index = 0;
        page_id = serial_buffer[1];
        for ( i = 0; i < 32; ++i )
        {
            // seems to decode 1 k
            decrypt_32_byte_block(i);
        }
        if ( page_id >= 0x3B )
        {
            // 0x3B - 0xFF (Verify flash page 0xC5 + page id)
            if ( page_id == 0xFF )
            {
                // this bit means verify config ???
                if ( (is_config_2_data & 1) != 0 )
                {
                    if ( is_same_1_k((char *)&config_type_2) )
                    {
                        resp_status = OK;
                    }
                    else
                    {
                        resp_status = ERROR;
                    }
                    resp_page_id = 0xFF;
                }
                else
                {
                    resp_status = OK;
                    resp_page_id = 0xFF;
                }
            }
            else
            {
                // cmd >= c5 means Verify page id outside bootloader
                // 0xFD = config 1
                // 0xFE = unknown config
                // 0xFF is taken care of above
                if ( page_id >= 0xC5 )
                {
                    if ( !is_same_1_k((char *)((page_id << 10) + 0x7FCFC00)) )
                    {
                        resp_status = ERROR;
                        goto SEND_ERROR;
                    }
SEND_OK:
                    resp_status = OK;
SEND_ERROR:
                    resp_page_id = page_id;
                    goto LABEL_12;
                }
                // Send "Unknown command"
                resp_status = ERROR;
                resp_page_id = 0x8F;
            }
        }
        else
        {
            // page_id = 0x00 - 0x3A

            // page_id 0x38 = config 1
            // page_id 0x3A = config 2
            if ( page_id != 0x3A )
            {
                // 0x0800F400 unknown config
                if ( page_id == 0x39 )
                {
                    // Sending OK really doesn't make any sense
                    if ( ((flash_section_bits >> 1) & 1) == 0 )
                    {
                        goto SEND_OK;
                    }
                }
                // 0x0800F000 config 1
                // Sending OK really doesn't make any sense
                else if ( page_id == 0x38 && (flash_section_bits & 1) == 0 )
                {
                    goto SEND_OK;
                }

                // CMD 0x00-0x39
                flash_write_serial_data_1k(&controller_main_ivt[256 * page_id]);
                goto SEND_OK;
            }

            // cmd == 0x3A
            // 0x0800F800 config 2
            if ( (is_config_2_data & 1) != 0 )
            {
                flash_write_serial_data_1k(&config_type_2);
            }
            if ( is_firmware_bad() )
            {
                resp_status = ERROR;
            }
            else
            {
                resp_status = OK;
            }
            resp_page_id = 0x3A;
        }
LABEL_12:
        tx_command(resp_page_id, resp_status);
    }
}
// 8000C12: conditional instruction was optimized away because r5.4!=0
// 8001000: using guessed type int controller_main_ivt[];
// 20000A28: using guessed type int dword_20000A28;
// 20000A2C: using guessed type int dword_20000A2C;

//----- (08000D14) --------------------------------------------------------
void *__fastcall calls_reset_functions_1_does_memset(void **a1)
{
    int v1; // r9
    _DWORD *ptr; // r4 MAPDST
    unsigned int index; // r2
    void *result; // r0

    while ( 1 )
    {
        index = (unsigned int)*a1;
        result = a1 + 1;
        if ( !index )
        {
            break;
        }
        ptr = *(_DWORD **)result;
        a1 = (void **)((char *)result + 4);
        if ( ((unsigned __int8)ptr & 1) != 0 )
        {
            ptr = (_DWORD *)((char *)ptr + v1 - 1);
        }
        do
        {
            *ptr++ = 0;
            index -= 4;
        }
        while ( index >= 4 );
        if ( (index & 2) != 0 )
        {
            *(_WORD *)ptr = 0;
            ptr = (_DWORD *)((char *)ptr + 2);
        }
        if ( (index & 1) != 0 )
        {
            *(_BYTE *)ptr = 0;
        }
    }
    return result;
}
// 8000D26: variable 'v1' is possibly undefined

//----- (08000D58) --------------------------------------------------------
void __noreturn boot_loader_reset_main()
{
    char *v0; // r0

    v0 = ram_start_and_xtea_crypto_key;
    do
    {
        *v0++ = 0;
    }
    while ( &bootloader_bss_end >= (_UNKNOWN *)v0 );
    boot_loader();
}

//----- (08000D7C) --------------------------------------------------------
int *calls_reset_functions_1_and_2()
{
    int *i; // r1
    int *result; // r0

    for ( i = &ptr_calls_reset_functions_1; i != (int *)LING_BO_COPYRIGHT; i = result )
    {
        result = (int *)((void *(__fastcall *)(void **))((char *)i + *i))((void **)i + 1);
    }
    return result;
}
// 8000DA4: using guessed type int ptr_calls_reset_functions_1;
// 8000DB0: using guessed type int dword_8000DB0;

//----- (08000DE8) --------------------------------------------------------
void __noreturn boot_loader()
{
    calls_reset_functions_1_and_2();
    boot_loader_main();
}

//----- (080010C0) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __cdecl init_hw_and_read_configs()
{
    int v0; // r1
    int v1; // r1
    int v2; // r0
    int v3; // r0
    __int16 v4; // r1
    unsigned int v5; // r1
    int v6; // r0
    int CFGR2; // r0
    unsigned int v8; // r0
    struc_20000A30 v9; // [sp-30h] [bp-80h] BYREF
    unsigned __int8 v10; // [sp-28h] [bp-78h] BYREF
    char v11; // [sp-27h] [bp-77h]
    char v12; // [sp-26h] [bp-76h]
    int *DR; // [sp-24h] [bp-74h] BYREF
    __int16 *v14; // [sp-20h] [bp-70h]
    int v15; // [sp-1Ch] [bp-6Ch]
    int v16; // [sp-18h] [bp-68h]
    int v17; // [sp-14h] [bp-64h]
    int v18; // [sp-10h] [bp-60h]
    int v19; // [sp-Ch] [bp-5Ch]
    int v20; // [sp-8h] [bp-58h]
    int v21; // [sp-4h] [bp-54h]
    int v22; // [sp+0h] [bp-50h]
    int v23; // [sp+4h] [bp-4Ch]
    struc_20000A30 v24; // [sp+50h] [bp+0h] BYREF

    sub_80032F0(0x1004000u);
    sub_80033D6(0xE0001, 1);
    sub_80033FE(2, 1);
    RCC_APB2ENR_clear_or_set(0x400A00, 1);
    v0 = DBGMCU_APB2_FZ;
    DBGMCU_APB2_FZ = ((unsigned int)&DBGMCU_APB1_FZ >> 19) | v0;
    v1 = DBGMCU_APB1_FZ;
    DBGMCU_APB1_FZ = v1 | 2;
    init_struc_20000A30(&v9);
    v9.bits = 253;
    v9.type = 3;
    init_port(&GPIO_A, &v9);
    v9.bits = 1;
    init_port(&GPIO_B, &v9);
    sub_80018AA();
    sub_8003570(&DMA1_CCR3);
    DR = &TIM3_CCR4;
    v14 = (__int16 *)&unk_200001B0;
    v15 = 16;
    v16 = 3;
    v17 = 0;
    v18 = 128;
    v19 = 256;
    v20 = 1024;
    v21 = 32;
    v22 = 0x2000;
    v23 = 0;
    sub_80035D2((unsigned int *)&DMA1_CCR3, (unsigned int *)&DR);
    sub_8003608(&DMA1_CCR3, 1);
    sub_8003570((int *)&DMA1_CCR1);
    DR = stru_40012400.DR;
    v14 = &word_200001C4;
    v15 = 0;
    v16 = 2;
    v17 = 0;
    v18 = 128;
    v19 = 256;
    v20 = 1024;
    v21 = 32;
    v22 = 4096;
    v23 = 0;
    sub_80035D2(&DMA1_CCR1, (unsigned int *)&DR);
    sub_8003608((int *)&DMA1_CCR1, 1);
    v2 = RCC_APB2RSTR;
    RCC_APB2RSTR = ((unsigned int)&RCC_APB2RSTR >> 19) | v2;
    RCC_APB2RSTR = (((unsigned int)&RCC_APB2RSTR >> 19) | v2) & 0xFFFFF7FF;
    v3 = RCC_APB1RSTR;
    RCC_APB1RSTR = v3 | 2;
    RCC_APB1RSTR = v3 & 0xFFFFFFFD;
    LOWORD(TIM1_CR1) = 352;
    LOWORD(TIM1_CR2) = 10752;
    LOWORD(TIM1_CCMR1_Output) = 26728;
    LOWORD(TIM1_CCMR2_Output) = 104;
    LOWORD(TIM1_CCER) = 3549;
    TIM1_ARR = 1538;
    LOWORD(TIM1_RCR) = 3;
    TIM1_CCR1 = 769;
    TIM1_CCR2 = 769;
    TIM1_CCR3 = 769;
    LOWORD(TIM1_BDTR) = 15908;
    LOWORD(TIM1_SMCR) = 22;
    LOWORD(TIM3_CR1) = (unsigned int)&RCC_APB2RSTR >> 22;
    LOWORD(TIM3_CR2) = 112;
    LOWORD(TIM3_CCMR2_Output) = 12288;
    TIM3_ARR = 6151;
    TIM3_CCR4 = 740;
    LOWORD(TIM3_SMCR) = 22;
    GPIO_A.AFRH = 0x222;
    GPIO_B.AFRH = 0x22220000;
    v24.bits = 1792;
    v24.type = 2;
    v24.speed = 2;
    v24.pullup_type = 0;
    init_port(&GPIO_A, &v24);
    HIBYTE(v9.pullup_type) = 1;
    v9.bits = 57344;
    init_port(&GPIO_B, &v9);
    HIBYTE(v9.pullup_type) = 0;
    v9.bits = (unsigned int)&RCC_APB2RSTR >> 18;
    init_port(&GPIO_B, &v9);
    sub_8003510((int)&GPIO_A, 1792);
    sub_8003510((int)&GPIO_B, 61440);
    LOWORD(TIM3_CR2) = TIM3_CR2 | 0x70;
    LOWORD(TIM1_SR) = -129;
    v4 = TIM1_DIER | 0x80;
    LOWORD(TIM1_DIER) = v4;
    LOWORD(TIM1_EGR) = 1;
    LOWORD(TIM3_EGR) = 1;
    RCC_APB1ENR |= 1u;
    RCC_APB1RSTR |= 1u;
    RCC_APB1RSTR &= ~1u;
    LOWORD(TIM2_CR2) = 32;
    TIM2_ARR = 1;
    LOWORD(TIM2_CR1) = 1;
    while ( !check_timer_status_bit(0x40000000, 1) )
    {
        ;
    }
    LOWORD(TIM2_SR) = -2;
    RCC_APB1ENR &= ~1u;
    word_200001CA = TIM1_CCMR1_Output & 0x8F8F;
    word_200001CC = TIM1_CCMR2_Output & 0xFF8F;
    RCC_APB2RSTR |= (unsigned int)&RCC_APB2RSTR >> 21;
    v5 = RCC_APB2RSTR & 0xFFFFFDFF;
    RCC_APB2RSTR = v5;
    sub_8003682((int)&stru_40012400);
    v6 = stru_40012400.CR | 1;
    stru_40012400.CR = v6;
    while ( !mb_adc_wait(&stru_40012400, 1) )
    {
        ;
    }
    stru_40012400.CFGR1 &= 0xFFFFD203;
    stru_40012400.CFGR1 |= 0x10E0u;
    CFGR2 = stru_40012400.CFGR2;
    stru_40012400.CFGR2 = CFGR2 | 0x80000000;
    read_config_type_1_and_2_recalibrate();
    stru_40012400.CFGR1 |= 0x10000u;
    byte_20000198[0] = 2;
    v10 = 13;
    v11 = 0;
    v12 = 1;
    init_NVIC(&v10);
    v10 = 9;
    v11 = 1;
    v12 = 1;
    init_NVIC(&v10);
    DMA1_IFCR = 2;
    v8 = DMA1_CCR1;
    DMA1_CCR1 = v8 | 2;
    LOWORD(TIM1_SR) = -2;
    LOWORD(v8) = TIM1_DIER;
    LOWORD(TIM1_DIER) = v8 | 1;
}
// 80011C6: positive sp value 30 has been found
// 80018AA: using guessed type int sub_80018AA(void);
// 20000198: using guessed type unsigned __int8 byte_20000198[3];
// 200001C4: using guessed type __int16 word_200001C4;
// 200001CA: using guessed type __int16 word_200001CA;
// 200001CC: using guessed type __int16 word_200001CC;
// 40000000: using guessed type int TIM2_CR1;
// 40000004: using guessed type int TIM2_CR2;
// 40000010: using guessed type int TIM2_SR;
// 4000002C: using guessed type int TIM2_ARR;
// 40000400: using guessed type int TIM3_CR1;
// 40000404: using guessed type int TIM3_CR2;
// 40000408: using guessed type int TIM3_SMCR;
// 40000414: using guessed type int TIM3_EGR;
// 4000041C: using guessed type int TIM3_CCMR2_Output;
// 4000042C: using guessed type int TIM3_ARR;
// 40000440: using guessed type int TIM3_CCR4;
// 40012400: using guessed type struct_adc stru_40012400;
// 40012C00: using guessed type int TIM1_CR1;
// 40012C04: using guessed type int TIM1_CR2;
// 40012C08: using guessed type int TIM1_SMCR;
// 40012C0C: using guessed type int TIM1_DIER;
// 40012C10: using guessed type int TIM1_SR;
// 40012C14: using guessed type int TIM1_EGR;
// 40012C18: using guessed type int TIM1_CCMR1_Output;
// 40012C1C: using guessed type int TIM1_CCMR2_Output;
// 40012C20: using guessed type int TIM1_CCER;
// 40012C2C: using guessed type int TIM1_ARR;
// 40012C30: using guessed type int TIM1_RCR;
// 40012C34: using guessed type int TIM1_CCR1;
// 40012C38: using guessed type int TIM1_CCR2;
// 40012C3C: using guessed type int TIM1_CCR3;
// 40012C44: using guessed type int TIM1_BDTR;
// 40015808: using guessed type int DBGMCU_APB1_FZ;
// 4001580C: using guessed type int DBGMCU_APB2_FZ;
// 40020004: using guessed type int DMA1_IFCR;
// 40020030: using guessed type int DMA1_CCR3;
// 4002100C: using guessed type int RCC_APB2RSTR;
// 40021010: using guessed type int RCC_APB1RSTR;
// 4002101C: using guessed type int RCC_APB1ENR;
// 48000000: using guessed type GPIO_PORT_STRUCT GPIO_A;
// 80010C0: using guessed type struc_20000A30 anonymous_2;

//----- (08001384) --------------------------------------------------------
void __cdecl update_auto_calibrate_adc_4_5_6_8()
{
    int v0; // r0

    // Seems like that should_auto_calibrate_adc_4_5_6_8 is set to true when the wheel is NOT moving 

    // Initially set to 1 by init code
    if ( PC14_autocalibrate && is_input_port_bit_set(&GPIO_C, BIT_14) )
    {
        PC14_autocalibrate = 0;
    }
    // Set to 0xFF by init code
    if ( prev_motor_sector_position == 0xFF )
    {
        prev_motor_sector_position = get_motor_sector_position();
    }
    else if ( !prev_motor_sector_position
           || (should_auto_calibrate_adcs = 1, prev_motor_sector_position != get_motor_sector_position()) )
    {
        prev_motor_sector_position = 0xEE;
        should_auto_calibrate_adcs = 0;
    }
    v0 = 4096;
    do
    {
        --v0;
    }
    while ( v0 );
}

//----- (080013E0) --------------------------------------------------------
void __cdecl recalculate_runtime_config_type_1_U_V_W_setting()
{
    int v0; // r0
    char v1; // r2
    int v2; // r3

    v0 = 64;
    if ( runtime_config_type_1.U_V_W_setting )
    {
        v1 = 0;
        v2 = 64;
        v0 = 32;
    }
    else
    {
        v1 = 1;
        v2 = 32;
    }
    U_V_W[1] = v2;
    U_V_W[2] = v0;
    U_V_W_setting = v1;
    U_V_W[0] = 16;
}
// 200001DC: using guessed type int mb_motor_hall_stuff[3];

//----- (0800145C) --------------------------------------------------------
void __cdecl read_config_type_1_and_2_recalibrate()
{
    int pos_adc_ch_4_sum; // r0
    int pos_adc_ch_5_sum; // r1
    int pos_adc_ch_6_sum; // r2
    int pos_adc_ch_8_sum; // r3
    __int16 v4; // r0
    int v5; // r0
    int v6; // r6
    int adc_cr; // r0 MAPDST
    __int16 v11; // r0
    int v12; // r0
    int v13; // r0
    int v14; // r1
    int v15; // r2
    int v16; // r3
    int v17; // r1
    char v18; // r0
    int v19; // r3
    __int16 v20; // t1

    // Read configurations
    copy_config_type_2_to_ram_and_validate();
    copy_config_type_1_to_ram_and_validate();

    // Validate ADC offset values found in configuration type 1
    pos_adc_ch_4_sum = (__int16)(runtime_config_type_1.adc_ch4_offset + 0x8000);
    if ( pos_adc_ch_4_sum < 0 )
    {
        pos_adc_ch_4_sum = -pos_adc_ch_4_sum;
    }
    pos_adc_ch_5_sum = (__int16)(runtime_config_type_1.adc_ch5_offset + 0x8000);
    if ( pos_adc_ch_5_sum < 0 )
    {
        pos_adc_ch_5_sum = -pos_adc_ch_5_sum;
    }
    pos_adc_ch_6_sum = (__int16)(runtime_config_type_1.adc_ch6_offset + 0x8000);
    if ( pos_adc_ch_6_sum < 0 )
    {
        pos_adc_ch_6_sum = -pos_adc_ch_6_sum;
    }
    pos_adc_ch_8_sum = (__int16)(runtime_config_type_1.adc_ch8_offset - 0x4000);
    if ( pos_adc_ch_8_sum < 0 )
    {
        pos_adc_ch_8_sum = -pos_adc_ch_8_sum;
    }

    // Are config ADC values within spec (-3972 to 3972) ?
    if ( (__int16)pos_adc_ch_4_sum < 3972
      && (__int16)pos_adc_ch_5_sum < 3972
      && (__int16)pos_adc_ch_6_sum < 3972
      && (__int16)pos_adc_ch_8_sum < 3972 )
    {
        if ( !default_configuration_used && !PC14_autocalibrate )
        {
            mb_config_ok_start_timers();
            goto start_normally;
        }
    }
    else
    {
        default_configuration_used = 1;
    }

    if ( should_auto_calibrate_adcs == 1 )
    {
        // Auto calibrate ADCs offset values and store the in config_type_1
        LOWORD(TIM1_CCMR1_Output) = word_200001CA | 0x4040;
        LOWORD(TIM1_CCMR2_Output) = word_200001CC | 0x40;
        v4 = TIM1_CCER;
        LOWORD(TIM1_CCER) = v4 | 0x555;
        stop_or_start_timer((int)&TIM1_CR1, 1);
        v5 = 80000;
        do
        {
            --v5;
        }
        while ( v5 );
        runtime_config_type_1.adc_ch4_offset = 0;
        runtime_config_type_1.adc_ch5_offset = 0;
        runtime_config_type_1.adc_ch6_offset = 0;
        runtime_config_type_1.adc_ch8_offset = 0;
        if ( !check_timer_status_bit((int)&TIM1_CR1, 128) && (error_bits & BREAK_L) == 0 )
        {
            v6 = 16;
            do
            {
                stru_40012400.CHSELR = 0;
                restart_adc_channel((int)&stru_40012400, 16, 0);
                stru_40012400.ISR = 8;
                adc_cr = stru_40012400.CR;
                stru_40012400.CR = adc_cr | 4;
                while ( !mb_adc_wait(&stru_40012400, 8) )
                {
                    ;
                }
                runtime_config_type_1.adc_ch4_offset += (unsigned int)get_adc_value(&stru_40012400) >> 4;

                stru_40012400.CHSELR = 0;
                restart_adc_channel((int)&stru_40012400, 32, 0);
                stru_40012400.ISR = 8;
                adc_cr = stru_40012400.CR;
                stru_40012400.CR = adc_cr | 4;
                while ( !mb_adc_wait(&stru_40012400, 8) )
                {
                    ;
                }
                runtime_config_type_1.adc_ch5_offset += (unsigned int)get_adc_value(&stru_40012400) >> 4;

                stru_40012400.CHSELR = 0;
                restart_adc_channel((int)&stru_40012400, 64, 0);
                stru_40012400.ISR = 8;
                adc_cr = stru_40012400.CR;
                stru_40012400.CR = adc_cr | 4;
                while ( !mb_adc_wait(&stru_40012400, 8) )
                {
                    ;
                }
                runtime_config_type_1.adc_ch6_offset += (unsigned int)get_adc_value(&stru_40012400) >> 4;

                stru_40012400.CHSELR = 0;
                restart_adc_channel((int)&stru_40012400, 256, 2);
                stru_40012400.ISR = 8;
                adc_cr = stru_40012400.CR;
                stru_40012400.CR = adc_cr | 4;
                while ( !mb_adc_wait(&stru_40012400, 8) )
                {
                    ;
                }
                runtime_config_type_1.adc_ch8_offset += (unsigned int)get_adc_value(&stru_40012400) >> 4;

                --v6;
            }
            while ( v6 );
        }
        stop_or_start_timer((int)&TIM1_CR1, 0);
        LOWORD(TIM1_CCMR1_Output) = word_200001CA | 0x6060;
        LOWORD(TIM1_CCMR2_Output) = word_200001CC | 0x60;
        v11 = TIM1_CCER;
        LOWORD(TIM1_CCER) = v11 | 0x555;
        v12 = 600;
        do
        {
            --v12;
        }
        while ( v12 );
    }
    // mb_break pressed
    if ( check_timer_status_bit((int)&TIM1_CR1, 128) || (error_bits & BREAK_L) != 0 || should_auto_calibrate_adcs != 1 )
    {
        goto LABEL_50;
    }
    v13 = (__int16)(runtime_config_type_1.adc_ch4_offset + 0x8000);
    if ( v13 < 0 )
    {
        v13 = -v13;
    }
    v14 = (__int16)(runtime_config_type_1.adc_ch5_offset + 0x8000);
    if ( v14 < 0 )
    {
        v14 = -v14;
    }
    v15 = (__int16)(runtime_config_type_1.adc_ch6_offset + 0x8000);
    if ( v15 < 0 )
    {
        v15 = -v15;
    }
    v16 = (__int16)(runtime_config_type_1.adc_ch8_offset - 0x4000);
    if ( v16 < 0 )
    {
        v16 = -v16;
    }
    if ( (__int16)v13 >= 3972 || (__int16)v14 >= 3972 || (__int16)v15 >= 3972 || (__int16)v16 >= 3972 )
    {
LABEL_50:
        set_error_bit(SELF_CHECK_FAILED);
    }
    else
    {
        // I guess this means that the adc offset calc went well
        runtime_config_type_1.magic_A5A5_or_FFFF = 0xA5A5;
        copy_config_type_1_to_flash();
        mb_config_ok_start_timers();
        // PB2 Led?
        set_GPIO_pin(&GPIO_B, 4);
    }
start_normally:
    v17 = 64;
    if ( runtime_config_type_1.U_V_W_setting )
    {
        v18 = 0;
        v19 = 64;
        v17 = 32;
    }
    else
    {
        v18 = 1;
        v19 = 32;
    }
    U_V_W[2] = v17;
    U_V_W[1] = v19;
    U_V_W[0] = 16;
    U_V_W_setting = v18;
    LOWORD(TIM1_SR) = -2;
    // wait for CC1IF: Capture/Compare 1 interrupt flag
    while ( !check_timer_status_bit((int)&TIM1_CR1, 1) )
    {
        ;
    }
    v20 = TIM3_DIER;
    LOWORD(TIM3_DIER) = ((unsigned int)&TIM3_DIER >> 18) | v20;
}
// 200001CA: using guessed type __int16 word_200001CA;
// 200001CC: using guessed type __int16 word_200001CC;
// 200001DC: using guessed type int U_V_W[3];
// 4000040C: using guessed type int TIM3_DIER;
// 40012400: using guessed type struct_adc stru_40012400;
// 40012C00: using guessed type int TIM1_CR1;
// 40012C10: using guessed type int TIM1_SR;
// 40012C18: using guessed type int TIM1_CCMR1_Output;
// 40012C1C: using guessed type int TIM1_CCMR2_Output;
// 40012C20: using guessed type int TIM1_CCER;

//----- (08001734) --------------------------------------------------------
void __cdecl mb_config_ok_start_timers()
{
    int index; // r7
    __int16 v1; // r0
    int CR; // r0
    int v3; // r1
    int v4; // r0
    int v5; // r2
    int v6; // r3
    int v7; // r0
    int CFGR1; // r0
    __int16 v9; // r0
    struc_port_bits *v10; // [sp+0h] [bp-20h]
    int *v11; // [sp+4h] [bp-1Ch]

    TIM3_CCR4 = 960;
    index = 0;
    v11 = ADC_port_list;
    v10 = &port_bits_list;
    while ( 1 )
    {
        LOWORD(TIM1_CCMR1_Output) = TIM1_CCMR1_Output & 0x8F8F;
        LOWORD(TIM1_CCMR1_Output) = TIM1_CCMR1_Output | 0x4040;
        LOWORD(TIM1_CCMR2_Output) = TIM1_CCMR2_Output & 0xFF8F;
        LOWORD(TIM1_CCMR2_Output) = TIM1_CCMR2_Output | 0x40;
        LOWORD(TIM1_CCER) = TIM1_CCER & 0xFAAA | 0x444;
        stru_40012400.CHSELR = 0;
        restart_adc_channel((int)&stru_40012400, *v11, 0);
        LOWORD(TIM1_SR) = -2;
        while ( !check_timer_status_bit((int)&TIM1_CR1, 1) )
        {
            ;
        }
        LOWORD(TIM1_CCMR1_Output) = TIM1_CCMR1_Output & 0x8F8F;
        LOWORD(TIM1_CCMR2_Output) = TIM1_CCMR2_Output & 0xFF8F;
        LOWORD(TIM1_CCMR1_Output) = v10->field_0 | word_200001CA;
        LOWORD(TIM1_CCMR2_Output) = v10->field_2 | word_200001CC;
        v1 = TIM1_CCER;
        LOWORD(TIM1_CCER) = v10->field_4 | v1 & 0xFAAA;
        stop_or_start_timer((int)&TIM1_CR1, 1);
        CR = stru_40012400.CR;
        stru_40012400.CR = CR | 0x10;
        while ( (stru_40012400.CR & 4) != 0 )
        {
            ;
        }
        stru_40012400.ISR = 8;
        v3 = stru_40012400.CFGR1 | 0xC00;
        stru_40012400.CFGR1 = v3;
        v4 = stru_40012400.CR | 4;
        stru_40012400.CR = v4;
        while ( !mb_adc_wait(&stru_40012400, 8)
             && !check_timer_status_bit((int)&TIM1_CR1, 128)
             && (error_bits & 0x200) == 0 )
        {
            ;
        }
        stop_or_start_timer((int)&TIM1_CR1, 0);
        v7 = stru_40012400.CR;
        stru_40012400.CR = v7 | 0x10;
        while ( (stru_40012400.CR & 4) != 0 )
        {
            ;
        }
        CFGR1 = stru_40012400.CFGR1;
        stru_40012400.CFGR1 = CFGR1 & 0xFFFFF3FF;
        sub_8003CF2(CFGR1, CFGR1 & 0xFFFFF3FF, v5, v6);
        if ( index != 9 )
        {
            // Throws the value away ?!?
            get_adc_value(&stru_40012400);
        }
        // Throws the value away ?!?
        mb_some_speed();
        if ( check_timer_status_bit((int)&TIM1_CR1, 128) || (error_bits & 0x200) != 0 )
        {
            break;
        }
        index = (unsigned __int16)(index + 1);
        ++v10;
        ++v11;
        if ( index >= 13 )
        {
            goto LABEL_18;
        }
    }
    set_error_bit(16);
LABEL_18:
    LOWORD(TIM1_CCMR1_Output) = word_200001CA | 0x6060;
    LOWORD(TIM1_CCMR2_Output) = word_200001CC | 0x60;
    v9 = TIM1_CCER;
    LOWORD(TIM1_CCER) = v9 | 0x555;
}
// 8001846: variable 'v5' is possibly undefined
// 8001846: variable 'v6' is possibly undefined
// 80079B0: using guessed type int ADC_port_list[13];
// 200001CA: using guessed type __int16 word_200001CA;
// 200001CC: using guessed type __int16 word_200001CC;
// 40000440: using guessed type int TIM3_CCR4;
// 40012400: using guessed type struct_adc stru_40012400;
// 40012C00: using guessed type int TIM1_CR1;
// 40012C10: using guessed type int TIM1_SR;
// 40012C18: using guessed type int TIM1_CCMR1_Output;
// 40012C1C: using guessed type int TIM1_CCMR2_Output;
// 40012C20: using guessed type int TIM1_CCER;

//----- (080018AA) --------------------------------------------------------
char *sub_80018AA()
{
    char *result; // r0

    result = &byte_20000194;
    word_200001AA[0] = 740;
    word_200001AA[1] = 986;
    unk_200001B0 = 986;
    unk_200001B2 = 6151;
    unk_200001B4 = 740;
    word_200001A4[0] = 769;
    word_200001A4[1] = 769;
    word_200001A4[2] = 769;
    TIM1_CCR1 = 769;
    TIM1_CCR2 = 769;
    TIM1_CCR3 = 769;
    word_200001CE = 0;
    word_200001D2 = 0;
    word_200001D0 = 0;
    return result;
}
// 20000194: using guessed type char byte_20000194;
// 200001A4: using guessed type unsigned __int16 word_200001A4[3];
// 200001A6: using guessed type unsigned __int16;
// 200001A8: using guessed type unsigned __int16;
// 200001AA: using guessed type __int16 word_200001AA[2];
// 200001CE: using guessed type unsigned __int16 word_200001CE;
// 200001D0: using guessed type unsigned __int16 word_200001D0;
// 200001D2: using guessed type __int16 word_200001D2;
// 40012C34: using guessed type int TIM1_CCR1;
// 40012C38: using guessed type int TIM1_CCR2;
// 40012C3C: using guessed type int TIM1_CCR3;

//----- (080018DA) --------------------------------------------------------
int sub_80018DA()
{
    int result; // r0

    result = 0;
    word_200001CE = 0;
    word_200001D2 = 0;
    word_200001D0 = 0;
    return result;
}
// 200001CE: using guessed type unsigned __int16 word_200001CE;
// 200001D0: using guessed type unsigned __int16 word_200001D0;
// 200001D2: using guessed type __int16 word_200001D2;

//----- (080018F4) --------------------------------------------------------
int sub_80018F4()
{
    __int16 v0; // r0
    int v1; // r2
    int v2; // r3
    __int16 v3; // r0
    unsigned __int16 v4; // t1
    unsigned int v5; // r2
    unsigned __int8 v7; // [sp+0h] [bp-18h]

    v7 = 0;
    v0 = TIM1_DIER;
    LOWORD(TIM1_DIER) = v0 & 0xFFFE;
    LOWORD(TIM1_SR) = -2;
    while ( !check_timer_status_bit((int)&TIM1_CR1, 1) )
    {
        ;
    }
    v3 = DMA1_CCR1;
    DMA1_CCR1 = v3 & 0xFFFE;
    DMA1_CCR1 = v3 & 0xFFFC;
    v4 = TIM3_DIER;
    LOWORD(TIM3_DIER) = v4 & 0xEFFF;
    LOWORD(TIM1_SR) = -2;
    sub_8003CF2(v4, v4 & 0xEFFF, v1, v2);
    mb_config_ok_start_timers();
    LOWORD(TIM1_SR) = -2;
    while ( !check_timer_status_bit((int)&TIM1_CR1, 1) )
    {
        ;
    }
    TIM3_CCR4 = unk_200001B4;
    LOWORD(TIM3_DIER) = ((unsigned int)&TIM1_CR1 >> 18) | TIM3_DIER;
    DMA1_IFCR = 2;
    v5 = DMA1_CCR1;
    DMA1_CCR1 = v5 | 2;
    word_200001CE = 0;
    word_200001D2 = 0;
    word_200001D0 = 0;
    some_speed_limiting();
    LOWORD(TIM1_SR) = -2;
    LOWORD(TIM1_DIER) = TIM1_DIER | 1;
    if ( ((unsigned __int16)error_bits & (unsigned __int16)~UNDER_VOLT) != 0 )
    {
        return 1;
    }
    return v7;
}
// 8001934: variable 'v1' is possibly undefined
// 8001934: variable 'v2' is possibly undefined
// 200001CE: using guessed type unsigned __int16 word_200001CE;
// 200001D0: using guessed type unsigned __int16 word_200001D0;
// 200001D2: using guessed type __int16 word_200001D2;
// 4000040C: using guessed type int TIM3_DIER;
// 40000440: using guessed type int TIM3_CCR4;
// 40012C00: using guessed type int TIM1_CR1;
// 40012C0C: using guessed type int TIM1_DIER;
// 40012C10: using guessed type int TIM1_SR;
// 40020004: using guessed type int DMA1_IFCR;

//----- (080019E4) --------------------------------------------------------
int __fastcall sub_80019E4(int a1, int a2)
{
    __int16 v2; // r2
    int v3; // r3
    int v4; // r4
    signed int v5; // r1
    int v6; // r0
    int v7; // kr04_4
    int v8; // r6
    char v9; // r5
    int v10; // r2
    int v11; // r5
    signed int v12; // r0
    int v13; // r1
    int v14; // r2
    int v15; // r5
    int v16; // r1
    int v17; // r0
    int v18; // r0
    int v19; // r2
    int v20; // r5
    int v21; // r0
    int v22; // r3
    int v23; // r2
    int v24; // r5
    int v25; // r0
    int v26; // r3
    int v27; // r1
    int v28; // r2
    int v29; // r5
    int v30; // r1
    int v31; // r3
    int v32; // r2
    int v33; // r5
    int v34; // r0
    int v35; // r1
    __int16 v36; // r0
    __int16 v37; // r1
    int v38; // r0
    char v39; // r0
    int v40; // r2
    int result; // r0
    char v42; // [sp+0h] [bp-18h]

    v42 = 1;
    v4 = 0x299F * a1;
    v5 = -0x1808u * a2;
    v6 = (v5 + 0x299F * a1) / 2;
    v7 = v5 - v4;
    v8 = (v5 - v4) / 2;
    if ( v6 >= 0 )
    {
        if ( v8 < 0 )
        {
            if ( v5 >= 1 )
            {
                v9 = 0;
            }
            else
            {
                v9 = 5;
            }
        }
        else
        {
            v9 = 1;
        }
    }
    else if ( v8 >= 0 )
    {
        if ( v5 >= 1 )
        {
            v9 = 2;
        }
        else
        {
            v9 = 3;
        }
    }
    else
    {
        v9 = 4;
    }
    unk_20000196 = v9;
    if ( (error_bits & 0x10000) != 0 )
    {
        byte_2000019D = 0;
    }
    switch ( unk_20000196 )
    {
        case 0:
            v10 = v5 - v8;
            if ( v5 - v8 < 0xC040000 )
            {
                if ( !byte_2000019D )
                {
                    v11 = (v5 + 0x1808 - v8) / 2 / 0x20000 + 0x301;
                    v12 = v11 + v8 / 0x20000;
                    v13 = v12 - v5 / 0x20000;
LABEL_21:
                    word_200001A4[2] = v13;
                    word_200001A4[1] = v12;
                    word_200001A4[0] = v11;
                    v2 = v12;
                    goto LABEL_54;
                }
                v11 = v10 >> 17;
                v12 = v5 >> 17;
            }
            else
            {
                LOWORD(v11) = 1538;
                LOWORD(v12) = divide_0(1538 * (v5 >> 10), v10 >> 10);
            }
            LOWORD(v13) = 0;
            goto LABEL_21;
        case 1:
            v14 = v6 + v8;
            if ( v6 + v8 < 0xC040000 )
            {
                if ( !byte_2000019D )
                {
                    v16 = (v6 + 0x1808 - v8) / 2 / 0x20000 + 0x301;
                    v15 = v16 + v8 / 0x20000;
                    v17 = v16 - v6 / 0x20000;
                    goto LABEL_28;
                }
                v16 = v6 >> 17;
                v15 = v14 >> 17;
            }
            else
            {
                LOWORD(v15) = 1538;
                LOWORD(v16) = divide_0(1538 * (v6 >> 10), v14 >> 10);
            }
            LOWORD(v17) = 0;
LABEL_28:
            word_200001A4[2] = v17;
            word_200001A4[1] = v15;
            word_200001A4[0] = v16;
            v2 = v16;
            v3 = (unsigned __int16)v15;
            v18 = U_V_W[0];
            goto LABEL_55;
        case 2:
            v19 = v5 - v6;
            if ( v5 - v6 < 0xC040000 )
            {
                if ( byte_2000019D )
                {
                    LOWORD(v22) = 0;
                    v21 = -v6 >> 17;
                    v20 = v19 >> 17;
                }
                else
                {
                    v22 = (0x1808 - v5 + v6) / 2 / 0x20000 + 0x301;
                    v21 = v22 - v6 / 0x20000;
                    LOWORD(v20) = v21 + v5 / 0x20000;
                }
            }
            else
            {
                LOWORD(v20) = 1538;
                LOWORD(v21) = divide_0(1538 * (-v6 >> 10), v19 >> 10);
                LOWORD(v22) = 0;
            }
            word_200001A4[2] = v21;
            word_200001A4[1] = v20;
            word_200001A4[0] = v22;
            v2 = v21;
            v3 = (unsigned __int16)v20;
            v18 = U_V_W[0];
            goto LABEL_55;
        case 3:
            v23 = v8 - v5;
            if ( v8 - v5 < 0xC040000 )
            {
                if ( byte_2000019D )
                {
                    LOWORD(v26) = 0;
                    v25 = v8 >> 17;
                    v24 = v23 >> 17;
                }
                else
                {
                    v26 = (v5 + 0x1808 - v8) / 2 / 0x20000 + 0x301;
                    v25 = v26 + v8 / 0x20000;
                    LOWORD(v24) = v25 - v5 / 0x20000;
                }
            }
            else
            {
                LOWORD(v24) = 1538;
                LOWORD(v25) = divide_0(1538 * (v8 >> 10), v23 >> 10);
                LOWORD(v26) = 0;
            }
            word_200001A4[2] = v24;
            word_200001A4[1] = v25;
            word_200001A4[0] = v26;
            v2 = v25;
            v3 = (unsigned __int16)v24;
            v18 = U_V_W[0];
            v27 = U_V_W[1];
            goto LABEL_56;
        case 4:
            v28 = -v6 - v8;
            if ( v28 < 0xC040000 )
            {
                if ( byte_2000019D )
                {
                    LOWORD(v31) = 0;
                    v30 = (v7 / -2) >> 17;
                    v29 = v28 >> 17;
                }
                else
                {
                    v30 = (v6 + 0x1808 - v8) / 2 / 0x20000 + 0x301;
                    v31 = v30 + v8 / 0x20000;
                    LOWORD(v29) = v30 - v6 / 0x20000;
                }
            }
            else
            {
                LOWORD(v29) = 1538;
                LOWORD(v30) = divide_0(1538 * ((v7 / -2) >> 10), v28 >> 10);
                LOWORD(v31) = 0;
            }
            word_200001A4[2] = v29;
            word_200001A4[1] = v31;
            word_200001A4[0] = v30;
            v2 = v30;
            v3 = (unsigned __int16)v29;
            v18 = U_V_W[0];
            v27 = U_V_W[1];
            goto LABEL_56;
        case 5:
            v32 = v6 - v5;
            if ( v6 - v5 < 0xC040000 )
            {
                if ( !byte_2000019D )
                {
                    v33 = (0x1808 - v5 + v6) / 2 / 0x20000 + 0x301;
                    v34 = v33 - v6 / 0x20000;
                    v35 = v34 + v5 / 0x20000;
                    goto LABEL_53;
                }
                v33 = v32 >> 17;
                v34 = -v5 >> 17;
            }
            else
            {
                LOWORD(v33) = 1538;
                LOWORD(v34) = divide_0(1538 * (-v5 >> 10), v32 >> 10);
            }
            LOWORD(v35) = 0;
LABEL_53:
            word_200001A4[2] = v34;
            word_200001A4[1] = v35;
            word_200001A4[0] = v33;
            v2 = v34;
LABEL_54:
            v3 = word_200001A4[0];
            v18 = U_V_W[1];
LABEL_55:
            v27 = U_V_W[2];
LABEL_56:
            unk_200001E8 = v18 + v27;
LABEL_57:
            if ( (unsigned __int16)(2 * (0x602 - v3)) >= 0x145u )
            {
                if ( (unsigned __int16)(2 * (0x602 - v3)) < 0x602u )
                {
                    v36 = v3 + 0xD9;
                    v37 = v3 + 0x128;
                    goto LABEL_75;
                }
                v36 = 1459;
                goto LABEL_74;
            }
            v38 = (unsigned __int16)(v3 - v2);
            if ( (unsigned __int16)(2 * (0x602 - v3)) < 0xF6u )
            {
                if ( (unsigned __int16)(v3 - v2) >= 0x145u )
                {
                    v37 = v3 - 29;
                    v36 = v3 - 108;
                    goto LABEL_75;
                }
                if ( v3 == 0x602 )
                {
                    v38 = (unsigned __int16)(2 * v38);
                }
                if ( v38 <= 255 )
                {
                    v42 = 0;
                    v36 = 0x5B3;
LABEL_74:
                    v37 = 0x603;
                    goto LABEL_75;
                }
                v36 = v2 - 29;
                if ( v3 == 0x602 )
                {
                    v37 = v2 + 226;
                }
                else
                {
                    v37 = v3 - 29;
                }
            }
            else
            {
                v37 = v3 + 217;
                if ( (unsigned __int16)(v3 - v2) >= 0xF5u )
                {
                    v36 = v3 - 29;
                }
                else
                {
                    v36 = v2 - 29;
                }
            }
LABEL_75:
            word_200001AA[1] = v37;
            word_200001AA[0] = v36;
            byte_2000019E = v42;
            byte_20000194 = byte_8007658[unk_20000196];
            byte_20000195 = byte_8007660[unk_20000196];
            if ( runtime_config_type_1.U_V_W_setting )
            {
                v39 = byte_8007930[unk_20000196];
                TIM1_CCR1 = word_200001A4[0];
                TIM1_CCR2 = word_200001A4[2];
                v40 = word_200001A4[1];
            }
            else
            {
                v39 = byte_8007928[unk_20000196];
                TIM1_CCR1 = word_200001A4[0];
                TIM1_CCR2 = word_200001A4[1];
                v40 = word_200001A4[2];
            }
            TIM1_CCR3 = v40;
            U_V_W_setting = v39;
            unk_200001B0 = word_200001AA[1];
            unk_200001B4 = word_200001AA[0];
            result = word_200001C8;
            word_200001C8 |= 1u;
            return result;
        default:
            goto LABEL_57;
    }
}
/* Orphan comments:
(USART_TDR)
*/
// 8001CBE: variable 'v3' is possibly undefined
// 8001CE8: variable 'v2' is possibly undefined
// 8007658: using guessed type _BYTE byte_8007658[8];
// 8007660: using guessed type _BYTE byte_8007660[8];
// 8007928: using guessed type _BYTE byte_8007928[8];
// 8007930: using guessed type _BYTE byte_8007930[8];
// 20000194: using guessed type char byte_20000194;
// 20000195: using guessed type char byte_20000195;
// 2000019D: using guessed type char byte_2000019D;
// 2000019E: using guessed type char byte_2000019E;
// 200001A4: using guessed type unsigned __int16 word_200001A4[3];
// 200001A6: using guessed type unsigned __int16;
// 200001A8: using guessed type unsigned __int16;
// 200001AA: using guessed type __int16 word_200001AA[2];
// 200001C8: using guessed type unsigned __int16 word_200001C8;
// 200001DC: using guessed type int U_V_W[3];
// 40012C34: using guessed type int TIM1_CCR1;
// 40012C38: using guessed type int TIM1_CCR2;
// 40012C3C: using guessed type int TIM1_CCR3;

//----- (08001DAC) --------------------------------------------------------
int __fastcall sub_8001DAC()
{
    unsigned __int16 adc_ch4_offset; // r0
    signed int v1; // r3
    int v2; // r2
    int v3; // r4
    int v4; // r5
    int v5; // r5
    int v6; // r0
    int v7; // r6
    signed int v8; // r0
    int v9; // r2
    int v10; // r3
    unsigned __int16 v11; // r0
    int v12; // r0
    unsigned __int16 v13; // r0
    int v15; // [sp+0h] [bp-28h]
    int v16; // [sp+8h] [bp-20h]
    int factor; // [sp+Ch] [bp-1Ch]

    v2 = 0;
    v3 = 0;
    switch ( byte_20000194 )
    {
        case 1:
            adc_ch4_offset = runtime_config_type_1.adc_ch4_offset;
            goto LABEL_12;
        case 0:
            goto LABEL_12;
        case 3:
            if ( runtime_config_type_1.U_V_W_setting )
            {
LABEL_11:
                adc_ch4_offset = runtime_config_type_1.adc_ch5_offset;
                goto LABEL_12;
            }
LABEL_10:
            adc_ch4_offset = runtime_config_type_1.adc_ch6_offset;
            goto LABEL_12;
    }
    if ( (unsigned __int8)byte_20000194 < 3u )
    {
        if ( !runtime_config_type_1.U_V_W_setting )
        {
            goto LABEL_11;
        }
        goto LABEL_10;
    }
LABEL_12:
    factor = some_calc_factor_1[byte_20000198[2]];
    *(_DWORD *)&adc_ch4_offset = adc_ch4_offset;
    v4 = ((adc_ch4_offset - (unsigned __int16)word_200001C4) * factor) >> 10;
    if ( v4 != (__int16)v4 )
    {
        v5 = ((adc_ch4_offset - (unsigned __int16)word_200001C4) * factor) >> 31;
        v4 = (v5 << 15) | ((unsigned int)~v5 >> 17);
    }
    if ( byte_20000194 == 1 )
    {
        LOWORD(v15) = v4;
        v2 = 1;
    }
    else if ( byte_20000194 )
    {
        if ( byte_20000194 == 3 )
        {
            HIWORD(v15) = v4;
        }
        else if ( (unsigned __int8)byte_20000194 < 3u )
        {
            LOWORD(v1) = v4;
            v3 = 1;
        }
    }
    switch ( byte_20000195 )
    {
        case 1:
            *(_DWORD *)&adc_ch4_offset = (unsigned __int16)runtime_config_type_1.adc_ch4_offset;
            goto LABEL_33;
        case 0:
            goto LABEL_33;
        case 3:
            if ( runtime_config_type_1.U_V_W_setting )
            {
LABEL_32:
                *(_DWORD *)&adc_ch4_offset = (unsigned __int16)runtime_config_type_1.adc_ch5_offset;
                goto LABEL_33;
            }
LABEL_31:
            *(_DWORD *)&adc_ch4_offset = (unsigned __int16)runtime_config_type_1.adc_ch6_offset;
            goto LABEL_33;
    }
    if ( (unsigned __int8)byte_20000195 < 3u )
    {
        if ( !runtime_config_type_1.U_V_W_setting )
        {
            goto LABEL_32;
        }
        goto LABEL_31;
    }
LABEL_33:
    v6 = ((*(_DWORD *)&adc_ch4_offset - (unsigned __int16)word_200001C6) * factor) >> 10;
    if ( v6 != (__int16)v6 )
    {
        v6 = (v6 >> 31 << 15) | ((unsigned int)~(v6 >> 31) >> 17);
    }
    if ( byte_20000195 == 1 )
    {
        v7 = v6;
        LOWORD(v15) = v6;
    }
    else
    {
        if ( byte_20000195 )
        {
            if ( byte_20000195 == 3 )
            {
                HIWORD(v15) = v6;
            }
            else if ( (unsigned __int8)byte_20000195 < 3u )
            {
                LOWORD(v1) = v6;
                v3 = 1;
            }
        }
        v7 = v6;
        if ( !v2 )
        {
            v8 = -(__int16)v1 - (v15 >> 16);
            if ( v8 != (__int16)v8 )
            {
                v8 = (v8 >> 31 << 15) | ((unsigned int)~(v8 >> 31) >> 17);
            }
            LOWORD(v15) = v8;
        }
    }
    if ( !v3 )
    {
        v1 = -(__int16)v15 - (v15 >> 16);
        if ( v1 != (__int16)v1 )
        {
            v1 = (v1 >> 31 << 15) | ((unsigned int)~(v1 >> 31) >> 17);
        }
    }
    LOWORD(v16) = v15;
    HIWORD(v16) = v1;
    if ( byte_2000019E == 1 )
    {
        v9 = v4;
        v10 = v7;
        if ( v4 < 0 )
        {
            v9 = (__int16)-(__int16)v4;
        }
        if ( v7 < 0 )
        {
            v10 = (__int16)-(__int16)v7;
        }
        v11 = word_200001D0 + 1;
        if ( word_200001D0 >= (unsigned int)((unsigned __int16)word_200001D4 >> 2) )
        {
            ++word_200001D0;
            v11 = 0;
            word_200001D2 = 0;
        }
        else
        {
            if ( word_200001D2 < v9 )
            {
                word_200001D2 = v9;
            }
            if ( word_200001D2 < v10 )
            {
                word_200001D2 = v10;
            }
        }
        word_200001D0 = v11;
        if ( (error_bits & 0x840000) == 0 )
        {
            if ( mb_current_amp_mul_100[0] < 501 || main_loop_state == 3 )
            {
                v13 = 0;
            }
            else if ( v4 * v7 >= 0 )
            {
                if ( !word_200001CE )
                {
                    return v16;
                }
                v13 = word_200001CE - 1;
            }
            else
            {
                v12 = (__int16)(v9 - v10);
                if ( v12 < 0 )
                {
                    v12 = -v12;
                }
                if ( (__int16)v12 < 476 && word_200001D2 >= 1788 )
                {
                    word_200001CE += 2;
                    if ( word_200001CE >= 51u )
                    {
                        set_error_bit(BIT_5);
                    }
                    return v16;
                }
                if ( !word_200001CE )
                {
                    return v16;
                }
                v13 = word_200001CE - 1;
            }
            word_200001CE = v13;
        }
    }
    return v16;
}
// 8001DEA: variable 'adc_ch4_offset' is possibly undefined
// 8001E98: variable 'v1' is possibly undefined
// 8001E9E: variable 'v15' is possibly undefined
// 80077C8: using guessed type unsigned __int16 some_calc_factor_1[176];
// 20000194: using guessed type char byte_20000194;
// 20000195: using guessed type char byte_20000195;
// 20000198: using guessed type unsigned __int8 byte_20000198[3];
// 2000019E: using guessed type char byte_2000019E;
// 200001C4: using guessed type __int16 word_200001C4;
// 200001C6: using guessed type __int16 word_200001C6;
// 200001CE: using guessed type unsigned __int16 word_200001CE;
// 200001D0: using guessed type unsigned __int16 word_200001D0;
// 200001D2: using guessed type __int16 word_200001D2;
// 200001D4: using guessed type __int16 word_200001D4;
// 20000322: using guessed type _WORD mb_current_amp_mul_100[3];
// 200004B1: using guessed type char mb_global_main_state;

//----- (08001FB0) --------------------------------------------------------
int *__fastcall set_tim1_ccr1_ccr2_ccr3(int a1)
{
    bool v1; // zf
    int *result; // r0

    v1 = a1 == 1;
    result = (int *)error_bits;
    if ( v1 )
    {
        error_bits |= BIT_22;
    }
    else
    {
        error_bits &= ~BIT_22;
        word_200001AA[0] = 0x2E4;
        word_200001AA[1] = 0x3DA;
        unk_200001B0 = 0x3DA;
        unk_200001B4 = 0x2E4;
        result = &TIM1_CCR1;
        TIM1_CCR1 = 0x301;
        TIM1_CCR2 = 0x301;
        TIM1_CCR3 = 0x301;
    }
    return result;
}
// 200001AA: using guessed type __int16 word_200001AA[2];
// 40012C34: using guessed type int TIM1_CCR1;
// 40012C38: using guessed type int TIM1_CCR2;
// 40012C3C: using guessed type int TIM1_CCR3;

//----- (08001FF8) --------------------------------------------------------
BOOL sub_8001FF8()
{
    __int16 v0; // r1
    int CR; // r1
    int v2; // r1

    v0 = DMA1_CCR1;
    DMA1_CCR1 = v0 & 0xFFFE;
    CR = stru_40012400.CR;
    stru_40012400.CR = CR | 0x10;
    while ( (stru_40012400.CR & 4) != 0 )
    {
        ;
    }
    stru_40012400.CFGR1 &= 0xFFFFF3FF;
    stru_40012400.CFGR1 &= ~1u;
    // Select chan 8
    stru_40012400.CHSELR = (unsigned int)&stru_40012400 >> 22;
    stru_40012400.SMPR = 2;
    stru_40012400.ISR = 8;
    v2 = stru_40012400.CR | 4;
    stru_40012400.CR = v2;
    return (error_bits & 0x400000) != 0;
}
// 40012400: using guessed type struct_adc stru_40012400;

//----- (0800205C) --------------------------------------------------------
void __cdecl some_speed_limiting()
{
    int CR; // r1
    int CFGR1; // r2
    int v2; // r2
    unsigned int v3; // r3
    int v4; // r3
    int v5; // r2
    unsigned __int8 v6; // r0
    int v7; // r0
    __int16 v8; // r2
    __int16 v9; // r0
    __int16 v10; // r0

    CR = stru_40012400.CR;
    stru_40012400.CR = CR | 0x10;
    while ( (stru_40012400.CR & 4) != 0 )
    {
        ;
    }
    stru_40012400.ISR = 8;
    stru_40012400.CHSELR = unk_200001E8;
    stru_40012400.SMPR = 0;
    CFGR1 = stru_40012400.CFGR1;
    if ( U_V_W_setting )
    {
        v2 = CFGR1 | 4;
    }
    else
    {
        v2 = CFGR1 & 0xFFFFFFFB;
    }
    stru_40012400.CFGR1 = v2;
    v3 = DMA1_CCR1;
    DMA1_CCR1 = v3 | 1;
    v4 = stru_40012400.CFGR1 | 0xC01;
    stru_40012400.CFGR1 = v4;
    v5 = stru_40012400.CR;
    stru_40012400.CR = v5 | 4;
    sub_8003CF2((int)&stru_40012400, v5 | 4, v5, v4);
    sub_800434C();

    // def_neg_75_max_150 clamping
    // No code found to update this field besides here
    if ( (unsigned int)(runtime_config_type_2.def_neg_75_max_150 + 150) >= 301 )
    {
        runtime_config_type_2.def_neg_75_max_150 = 0;
    }
    mb_current_amp_mul_100 = ((mb_adc_ch_8_battery_voltage[0] - (unsigned __int16)runtime_config_type_1.adc_ch8_offset)
                            * (runtime_config_type_2.def_neg_75_max_150 + 404)) >> 11;
    def_8000_max_8800_stuff_mb_batt_volt();
    if ( byte_20000198[0] == 3 )
    {
        sub_8004978();
    }
    else if ( byte_20000198[0] == 4 )
    {
        sub_8004B4C();
    }
    else
    {
        sub_80028E0();
    }
    v6 = byte_20000198[0] + 1;
    if ( (unsigned __int8)(byte_20000198[0] + 1) >= 5u )
    {
        v6 = 2;
    }
    byte_20000198[0] = v6;
    if ( main_loop_state == 4
      || main_loop_state == 3
      || main_loop_state == 8
      || main_loop_state == 9
      || main_loop_state == 15
      || main_loop_state == 13
      || main_loop_state == 5 )
    {
        sub_800573C();
    }
    v7 = sub_8004CB0();
    v8 = mb_max_amp_2[0];
    if ( v7 >= mb_max_amp_2[0] )
    {
        if ( unk_200001A1 )
        {
            unk_200001A1 = 0;
            if ( v7 >= word_20000318 || mb_max_amp_2[0] == v7 )
            {
                goto LABEL_41;
            }
        }
        else
        {
            if ( mb_max_amp_2[0] == word_20000318 )
            {
                goto LABEL_41;
            }
            if ( mb_max_amp_2[0] >= word_20000318 )
            {
                v8 = mb_max_amp_2[0] - 1;
                goto LABEL_41;
            }
        }
        v8 = mb_max_amp_2[0] + 1;
        goto LABEL_41;
    }
    if ( v7 >= word_20000318 )
    {
        v9 = mb_max_amp_2[0] - word_20000318;
    }
    else
    {
        v9 = mb_max_amp_2[0] - v7;
    }
    if ( v9 < 501 )
    {
        if ( v9 < 51 )
        {
            v8 = mb_max_amp_2[0] - 1;
        }
        else
        {
            v8 = mb_max_amp_2[0] - 50;
        }
    }
    else
    {
        v8 = mb_max_amp_2[0] - 500;
    }
    unk_200001A1 = 1;
LABEL_41:
    if ( word_200000FA < 4500 && word_200000FA < v8 )
    {
        v8 = word_200000FA;
    }
    mb_max_amp_2[0] = v8;
    if ( use_limit_17_35_for_1_or_17_20 == 1 )
    {
        mb_limit_speed_17_20();
    }
    else
    {
        mb_limit_speed_17_35();
    }
    v10 = mb_max_amp;
    unk_200001D8 = mb_max_amp;
    if ( RS485.mb_error_bits == 0x12 )
    {
        v10 = 1700;
    }
    word_20000318 = v10;
}
// 200000FA: using guessed type __int16 word_200000FA;
// 20000198: using guessed type unsigned __int8 byte_20000198[3];
// 200001B8: using guessed type _WORD mb_adc_ch_8_battery_voltage[1];
// 20000244: using guessed type struc_20000244 RS485;
// 200002D2: using guessed type char use_limit_17_35_for_1_or_17_20;
// 20000318: using guessed type __int16 word_20000318;
// 2000031A: using guessed type __int16 mb_max_amp_2[2];
// 20000322: using guessed type __int16 mb_current_amp_mul_100;
// 2000042E: using guessed type __int16 mb_max_amp;
// 200004B1: using guessed type char main_loop_state;
// 40012400: using guessed type struct_adc stru_40012400;

//----- (0800222C) --------------------------------------------------------
void __cdecl sub_800222C()
{
    unsigned __int16 v0; // r0
    unsigned __int16 v1; // r0
    __int16 v2; // r1
    __int16 v3; // r2
    __int16 v4; // r1
    int speed; // r5
    int divived_from_runtime_config_type_2_def_8000_max_8800; // r0
    __int16 v7; // r1
    __int16 v8; // r2
    __int16 v9; // r1
    int v10; // r0
    __int16 v11; // r1
    __int16 v12; // r1
    bool v13; // cc
    __int16 v14; // r1
    int v15; // r2
    __int16 v16; // r1

    lots_of_error_bits();
    if ( (error_bits & (BIT_23|BIT_16)) != 0 )
    {
        if ( (error_bits & 0x10000) == 0 )
        {
            return;
        }
        v10 = (__int16)word_200001FE;
        if ( word_200004A8[1] < (__int16)word_200001FE )
        {
            if ( word_200004A8[1] >= -500 )
            {
                v16 = 100;
            }
            else
            {
                v16 = 200;
            }
            *(_WORD *)byte_20000200 = v16;
            word_200004A8[1] += v16;
            v13 = (__int16)word_200001FE < word_200004A8[1];
            goto LABEL_86;
        }
        if ( (__int16)word_200001FE >= word_200004A8[1] )
        {
            return;
        }
        if ( word_200004A8[1] < 501 )
        {
            v14 = 100;
        }
        else
        {
            v14 = 200;
        }
LABEL_85:
        *(_WORD *)byte_20000202 = v14;
        word_200004A8[1] -= v14;
        v13 = word_200004A8[1] < v10;
        goto LABEL_86;
    }
    switch ( main_loop_state )
    {
        case 8:
            if ( !word_200004A8[0] )
            {
                v0 = word_2000020A;
                if ( word_2000020A < 0xAu )
                {
LABEL_5:
                    v1 = v0 + 1;
LABEL_74:
                    word_2000020A = v1;
                    return;
                }
                goto LABEL_32;
            }
            if ( word_200004A8[0] < 1 )
            {
                if ( word_200004A8[0] >= -7149 )
                {
                    if ( word_200004A8[0] < -2383 )
                    {
                        v4 = word_200004A8[0] + 476;
                    }
                    else
                    {
                        v4 = word_200004A8[0] + 238;
                    }
                }
                else
                {
                    v4 = word_200004A8[0] + 953;
                }
                word_200004A8[0] = v4;
                if ( v4 < 1 )
                {
                    goto LABEL_73;
                }
            }
            else
            {
                if ( word_200004A8[0] >= 2383 )
                {
                    if ( word_200004A8[0] < 7149 )
                    {
                        v3 = 476;
                    }
                    else
                    {
                        v3 = 953;
                    }
                    v2 = word_200004A8[0] - v3;
                }
                else
                {
                    v2 = word_200004A8[0] - 238;
                }
                word_200004A8[0] = v2;
                if ( v2 >= 0 )
                {
                    goto LABEL_73;
                }
            }
            word_200004A8[0] = 0;
            goto LABEL_73;
        case 5:
            if ( !*(_WORD *)((char *)word_200004A8 + (error_bits & (BIT_23|BIT_16))) )
            {
                v0 = word_2000020A;
                if ( word_2000020A < 0xAu )
                {
                    goto LABEL_5;
                }
                if ( mb_current_amp_mul_100 < 200
                  && (__int16)dword_2000049C < 595
                  && byte_200004B6 == 4
                  && (error_bits & (BIT_25|BIT_19|BIT_18)) == 0 )
                {
                    speed = mb_get_speed();
                    if ( dword_2000046C >= 1 && speed >= 461 )
                    {
                        divived_from_runtime_config_type_2_def_8000_max_8800 = get_divived_from_runtime_config_type_2_def_8000_max_8800();
                        word_20000208 = divide_0(960 * speed, divived_from_runtime_config_type_2_def_8000_max_8800);
                        dword_200001EC = dword_2000046C;
                        unk_200001F0 = dword_20000470;
                        unk_200001F7 = 1;
                    }
                }
LABEL_32:
                main_loop_state = 6;
                goto LABEL_73;
            }
            if ( word_200004A8[0] < 1 )
            {
                if ( word_200004A8[0] >= -7149 )
                {
                    if ( word_200004A8[0] < -2383 )
                    {
                        v9 = word_200004A8[0] + 476;
                    }
                    else
                    {
                        v9 = word_200004A8[0] + 238;
                    }
                }
                else
                {
                    v9 = word_200004A8[0] + 953;
                }
                word_200004A8[0] = v9;
                if ( v9 < 1 )
                {
                    goto LABEL_73;
                }
            }
            else
            {
                if ( word_200004A8[0] >= 2383 )
                {
                    if ( word_200004A8[0] < 7149 )
                    {
                        v8 = 476;
                    }
                    else
                    {
                        v8 = 953;
                    }
                    v7 = word_200004A8[0] - v8;
                }
                else
                {
                    v7 = word_200004A8[0] - 238;
                }
                word_200004A8[0] = v7;
                if ( v7 >= 0 )
                {
                    goto LABEL_73;
                }
            }
            word_200004A8[0] = 0;
LABEL_73:
            v1 = 0;
            goto LABEL_74;
        case 3:
        case 4:
            v10 = (__int16)word_200001FE;
            if ( word_200004A8[1] < (__int16)word_200001FE )
            {
                if ( word_200001FE )
                {
                    if ( word_200004A8[1] >= 90 )
                    {
                        if ( word_200004A8[1] >= 200 )
                        {
                            v12 = 250;
                        }
                        else
                        {
                            v12 = 150;
                        }
                        v11 = 2 * v12;
                    }
                    else
                    {
                        v11 = 100;
                    }
                }
                else if ( word_200004A8[1] >= -500 )
                {
                    v11 = 100;
                }
                else
                {
                    v11 = 200;
                }
                *(_WORD *)byte_20000200 = v11;
                word_200004A8[1] += v11;
                v13 = (__int16)word_200001FE < word_200004A8[1];
LABEL_86:
                if ( v13 )
                {
                    word_200004A8[1] = v10;
                }
                return;
            }
            if ( (__int16)word_200001FE >= word_200004A8[1] )
            {
                if ( word_200001FE )
                {
                    return;
                }
                if ( !word_200004A8[1] )
                {
                    v15 = word_2000020A++;
                    if ( v15 < 10 )
                    {
                        return;
                    }
                    byte_200004B6 = main_loop_state;
                    main_loop_state = 5;
                    error_bits &= ~BIT_20;
                }
                goto LABEL_73;
            }
            if ( word_200001FE )
            {
                v14 = 50;
            }
            else if ( word_200004A8[1] < 501 )
            {
                v14 = 100;
            }
            else
            {
                v14 = 200;
            }
            goto LABEL_85;
    }
}
/* Orphan comments:
Seems like PF0 = input, pull up
*/
// 200001EC: using guessed type int dword_200001EC;
// 200001FE: using guessed type unsigned __int16 word_200001FE;
// 20000200: using guessed type unsigned __int8 byte_20000200[2];
// 20000202: using guessed type unsigned __int8 byte_20000202[2];
// 20000208: using guessed type __int16 word_20000208;
// 2000020A: using guessed type unsigned __int16 word_2000020A;
// 20000322: using guessed type __int16 mb_current_amp_mul_100;
// 2000046C: using guessed type int dword_2000046C;
// 20000470: using guessed type int dword_20000470;
// 2000049C: using guessed type int dword_2000049C;
// 200004A8: using guessed type _WORD word_200004A8[3];
// 200004AA: using guessed type _WORD;
// 200004B1: using guessed type char main_loop_state;
// 200004B6: using guessed type char byte_200004B6;

//----- (08002528) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void lots_of_error_bits()
{
    __int16 v0; // r7
    int v1; // r0
    int is_fine; // r0
    __int16 v3; // r0
    int v4; // r0
    __int16 v5; // r0
    int v6; // r1
    bool v7; // r0

    mb_some_speed();
    mb_some_speed();
    *(_DWORD *)&word_20000230 = unk_20000234;
    mb_throttle_value = unk_20000234;
    if ( unk_200001F8 == 1 )
    {
        if ( unk_20000234 < 16881u )
        {
            unk_20001F82 = 0;
        }
        else if ( !unk_20001F81 )
        {
            unk_20001F82 = 1;
        }
        unk_20001F81 = 1;
        byte_20001F83[0] = (unsigned int)(unk_20000234 - 5958) >= 0xBA2E || unk_20001F82 == 1;
    }
    if ( (byte_20000431 == 1 || !mb_p_or_gear || PC15_global_status == 1) && !unk_20001F82 && unk_200001F8 == 1 )
    {
        error_bits &= ~BIT_17;
        if ( unk_20000234 >= 16881u )
        {
            *(_DWORD *)&word_20000230 = 16880;
        }
    }
    v1 = sub_8005B18();
    if ( !mb_p_or_gear )
    {
        v1 = 0;
    }
    unk_2000020C = word_20000230;
    if ( config_type_2_updated == 1 )
    {
        v1 = 0;
        if ( (unsigned int)(*(_DWORD *)&word_20000230 - 16881) < 0x8F83 )
        {
            *(_DWORD *)&word_20000230 = 16880;
        }
    }
    if ( (error_bits & (BIT_19|BIT_18|BIT_11|BIT_3|BIT_1)) != 0 )
    {
        if ( word_200001FE && (error_bits & BIT_18) == 0 )
        {
            word_200004A8[0] = word_2000031E;
            unk_20000408 = word_2000031E << 12;
            unk_200001F9 = 1;
            sub_8006246();
        }
        word_200001FE = 0;
        if ( (unsigned int)(*(_DWORD *)&word_20000230 - 16881) >= 0x8F83 )
        {
            if ( (error_bits & BIT_1) != 0 && (error_bits & BIT_22) == 0 )
            {
                some_selected_gear_mode_runtime_const_3();
            }
            if ( (error_bits & 8) != 0 )
            {
                if ( (error_bits & BIT_22) == 0 )
                {
                    error_bits &= ~BIT_3;
                }
            }
            else if ( ((unsigned __int16)error_bits & (unsigned __int16)~BIT_11) != 0 )
            {
                system_is_fine();
            }
        }
        goto LABEL_88;
    }
    if ( (error_bits & BIT_17) == 0 )
    {
        if ( (unsigned int)(*(_DWORD *)&word_20000230 - 16881) < 0x8F83 )
        {
            if ( main_loop_state )
            {
                if ( main_loop_state == 4 && unk_200001F9 == 1 )
                {
                    sub_8006218();
                    unk_200001F9 = 0;
                }
                if ( *(_DWORD *)&word_20000230 < 0xB26Cu )
                {
                    if ( (error_bits & BIT_25) == 0 )
                    {
                        unk_20000238 = *(_DWORD *)&word_20000230;
                        unk_2000020E = word_20000230;
                        unk_20000210 = word_20000230;
                        v5 = (((*(_DWORD *)&word_20000230 - 0x41F0)
                             * (unsigned __int16)runtime_selected_gear_mode_const_2) >> 10)
                           + 80;
                        if ( v5 >= 80 )
                        {
                            v0 = runtime_selected_gear_mode_const_1;
                            if ( runtime_selected_gear_mode_const_1 >= v5 )
                            {
                                v0 = v5 & 0xFFFC;
                            }
                        }
                        else
                        {
                            v0 = 80;
                        }
                        unk_20000212 = v0;
                    }
                }
                else
                {
                    v0 = runtime_selected_gear_mode_const_1;
                    unk_20000238 = *(_DWORD *)&word_20000230;
                }
                unk_20000214 = v0;
                word_200001FE = v0;
                if ( main_loop_state == 1 || main_loop_state == 10 )
                {
                    word_200004A8[1] = mb_get_speed();
                    main_loop_state = 2;
                    if ( unk_200001F9 == 1 )
                    {
                        sub_8006218();
                        unk_200001F9 = 0;
                    }
                    word_200004A8[0] = 0;
                    v4 = 0;
                    goto LABEL_73;
                }
                if ( main_loop_state != 5 )
                {
                    goto LABEL_79;
                }
                unk_20000408 = word_200004A8[0] << 12;
                error_bits |= BIT_20;
                if ( unk_200001F9 == 1 )
                {
                    goto LABEL_76;
                }
                goto LABEL_77;
            }
        }
        else
        {
            if ( !main_loop_state )
            {
                if ( *(_DWORD *)&word_20000230 < 0xD174u && (error_bits & BIT_4) == 0 )
                {
                    main_loop_state = 1;
                    word_200001FE = 0;
                }
                goto LABEL_79;
            }
            if ( !v1 )
            {
                if ( word_200001FE )
                {
                    word_200001FE = 0;
                    word_200004A8[1] = mb_get_speed();
                    word_200004A8[0] = word_2000031E;
                    unk_20000408 = word_2000031E << 12;
                    unk_200001F9 = 1;
                    sub_8006246();
                }
                if ( main_loop_state != 14 )
                {
                    goto LABEL_79;
                }
                is_fine = system_is_fine();
                if ( is_fine != 1 )
                {
                    goto LABEL_79;
                }
                goto LABEL_78;
            }
            word_200001FE = v1;
            if ( main_loop_state == 1 || main_loop_state == 10 )
            {
                word_200004A8[1] = mb_get_speed();
                main_loop_state = 2;
                if ( (error_bits & BIT_25) != 0 )
                {
                    v3 = -595;
                }
                else
                {
                    v3 = 595;
                }
                word_200004A8[0] = v3;
                v4 = v3 << 12;
LABEL_73:
                unk_20000408 = v4;
                sub_80055D0();
                word_2000031E = word_200004A8[0];
                sub_8003248();
                goto LABEL_79;
            }
            if ( main_loop_state == 5 )
            {
                unk_20000408 = word_200004A8[0] << 12;
                error_bits |= BIT_20;
                if ( unk_200001F9 == 1 )
                {
LABEL_76:
                    sub_8006218();
                    unk_200001F9 = 0;
                }
LABEL_77:
                LOBYTE(is_fine) = byte_200004B6;
LABEL_78:
                main_loop_state = is_fine;
            }
        }
    }
LABEL_79:
    if ( stru_20000130.field_B == 1 )
    {
        if ( !unk_200001FA )
        {
            unk_200001FA = 1;
        }
        v6 = word_2000014C;
        if ( (error_bits & BIT_25) != 0 )
        {
            dword_200003F8 = -word_2000014C;
            byte_20000400[0] = -4096 * word_2000014C;
            goto LABEL_88;
        }
    }
    else
    {
        if ( !unk_200001FA )
        {
            goto LABEL_88;
        }
        unk_200001FA = 0;
        if ( (error_bits & BIT_25) != 0 )
        {
            goto LABEL_88;
        }
        v6 = 17872;
    }
    dword_200003FC = v6;
    unk_20000404[0] = v6 << 12;
LABEL_88:
    v7 = mb_get_speed() >= 11 && word_200001FE == 0;
    byte_20001F83[1] = v7;
    unk_20000216 = word_200001FE;
}
// 8002568: positive sp value 248 has been found
// 8002790: variable 'v0' is possibly undefined
// 20000130: using guessed type struc_20000130 stru_20000130;
// 2000014C: using guessed type __int16 word_2000014C;
// 200001FE: using guessed type unsigned __int16 word_200001FE;
// 20000230: using guessed type __int16 word_20000230;
// 20000240: using guessed type int mb_throttle_value;
// 20000274: using guessed type char mb_p_or_gear;
// 2000031E: using guessed type __int16 word_2000031E;
// 200003B4: using guessed type __int16 runtime_selected_gear_mode_const_1;
// 200003B6: using guessed type __int16 runtime_selected_gear_mode_const_2;
// 200003F8: using guessed type int dword_200003F8;
// 200003FC: using guessed type int dword_200003FC;
// 20000400: using guessed type int byte_20000400[11];
// 20000404: using guessed type int unk_20000404[10];
// 20000431: using guessed type char byte_20000431;
// 2000043D: using guessed type char PC15_global_status;
// 200004A8: using guessed type _WORD word_200004A8[3];
// 200004B1: using guessed type char main_loop_state;
// 200004B6: using guessed type char byte_200004B6;
// 200004B8: using guessed type char config_type_2_updated;
// 20001F83: using guessed type unsigned __int8 byte_20001F83[2];
// 20001F84: using guessed type unsigned __int8;

//----- (080028AC) --------------------------------------------------------
void __cdecl sub_80028AC()
{
    *(_DWORD *)&word_20000230 = 0;
    unk_20000234 = 0;
    unk_2000023C = 0;
    unk_20000220 = 0;
    unk_20000224 = 0;
    unk_20000228 = 0;
    unk_2000022C = 0;
}
// 20000230: using guessed type __int16 word_20000230;

//----- (080028E0) --------------------------------------------------------
int *sub_80028E0()
{
    int *result; // r0
    char v1; // r1
    char *v2; // r2
    unsigned int v3; // r4
    int v4; // r1

    result = &dword_200001EC;
    v1 = unk_200001F6;
    v2 = (char *)&dword_200001EC + 2 * unk_200001F6;
    v3 = unk_2000023C - *((unsigned __int16 *)v2 + 26) + unk_200001BC;
    unk_2000023C = v3;
    *((_WORD *)v2 + 26) = unk_200001BC;
    v4 = (unsigned __int8)(v1 + 1);
    if ( v4 >= 8 )
    {
        LOBYTE(v4) = 0;
        unk_200001F8 = 1;
    }
    unk_200001F6 = v4;
    unk_20000234 = v3 >> 3;
    return result;
}
// 200001BC: using guessed type unsigned __int16 word_200001BC;
// 200001EC: using guessed type int dword_200001EC;

//----- (08002954) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __cdecl somthing_with_break_and_not_break()
{
    int v0; // r1
    int v1; // r2
    int v2; // r1
    int v3; // r2
    int v4; // r0
    int v5; // r0
    __int16 v6; // r0
    int v7; // [sp-228h] [bp-240h]

    unk_200001F5 = 0;
    if ( (error_bits & 0x80000) != 0 )
    {
        return;
    }
    // BreaK H
    // PA11
    if ( is_input_port_bit_set(&GPIO_A, 0x800) )
    {
        // Break pressed
        unk_200001FB = 0;
        if ( byte_200001FC[0] >= 0x14u )
        {
            if ( word_20000218 )
            {
                v4 = --word_20000218;
                if ( !(v4 << 16) && (error_bits & 0x2000000) == 0 )
                {
                    word_200003F4 = 1024;
                    unk_200003F6 = 16;
                    dword_200003F8 = 0xFFFFFF12;
                    dword_200003FC = 0x45D0;
                    byte_20000400[0] = 0xFFF12000;
                    unk_20000404[0] = 0x45D0000;
                }
            }
            if ( main_loop_state == 14 && (error_bits & 0x8000) != 0 && system_is_fine() )
            {
                main_loop_state = 1;
            }
            if ( (error_bits & 0x40000) != 0 )
            {
                sub_8006818(0);
                if ( (error_bits & 0x10000) != 0 )
                {
                    error_bits &= ~(BIT_18|BIT_16);
                    word_20000218 = 0;
                    word_200003F4 = 0x400;
                    unk_200003F6 = 16;
                    if ( main_loop_state == 3 || main_loop_state == 4 )
                    {
                        if ( (unsigned int)(*(_DWORD *)&word_20000230 - 16881) < 0x8F83 )
                        {
                            word_20000218 = 10;
                            v5 = (__int16)((((unk_20000238 - 16880)
                                           * (unsigned __int16)runtime_selected_gear_mode_const_2) >> 10)
                                         + 80);
                            if ( v5 >= 80 )
                            {
                                if ( runtime_selected_gear_mode_const_1 >= v5 )
                                {
                                    v6 = v5 & 0x7FFC;
                                }
                                else
                                {
                                    v6 = runtime_selected_gear_mode_const_1;
                                }
                            }
                            else
                            {
                                v6 = 80;
                            }
                            word_200001FE = v6;
                        }
                        else
                        {
                            main_loop_state = 8;
                            error_bits &= ~0x100000u;
                            word_200004A8[0] = dword_2000049C;
                            word_200003DC = 128;
                            unk_200003DE = 128;
                            word_200003C4 = 800;
                            unk_200003C6 = 1100;
                        }
                    }
                    dword_200002FC = sub_80057DC() << 11;
                }
                else if ( main_loop_state == 5 )
                {
                    unk_20000408 = word_200004A8[0] << 12;
                    error_bits |= 0x100000u;
                    if ( unk_200001F9 == 1 )
                    {
                        sub_8006218();
                        unk_200001F9 = 0;
                    }
                    main_loop_state = byte_200004B6;
                }
                error_bits &= ~(BIT_18|BIT_16);
            }
            unk_20001F85 = 0;
        }
        else
        {
            ++byte_200001FC[0];
        }
    }
    else
    {
        // Not break pressed
        byte_200001FC[0] = 0;
        if ( unk_200001FB < 5u )
        {
            ++unk_200001FB;
            return;
        }
        if ( !unk_200001F5 )
        {
            if ( (error_bits & 0x40000) == 0 )
            {
                word_200001FE = 0;
                word_200004A8[1] = 0;
                word_200004A8[0] = dword_2000049C;
                v0 = (__int16)dword_2000049C << 12;
                v1 = unk_20000404[0];
                if ( unk_20000404[0] < v0 || (v1 = byte_20000400[0], v0 < byte_20000400[0]) )
                {
                    v0 = v1;
                }
                unk_20000408 = v0;
                unk_200001F9 = 1;
                sub_8006246();
                byte_200001F4 = 0;
                if ( (error_bits & 0x4000000) == 0 )
                {
                    if ( sub_8003870() < 1 )
                    {
                        word_20000204 = -1;
                    }
                    else
                    {
                        word_20000204 = 1;
                    }
                }
                error_bits |= 0x40000u;
                error_bits &= ~0x20000u;
            }
            return;
        }
        if ( (error_bits & 0x4000000) == 0 )
        {
            v7 = (unsigned __int16)mb_some_speed();
        }
        if ( v7 < 0 )
        {
            v7 = (__int16)-(__int16)v7;
        }
        if ( (error_bits & 0x40000) == 0 )
        {
            if ( v7 < 15 )
            {
                word_200001FE = 0;
                word_200004A8[0] = dword_2000049C;
                v2 = (__int16)dword_2000049C << 12;
                v3 = unk_20000404[0];
                if ( unk_20000404[0] < v2 || (v3 = byte_20000400[0], v2 < byte_20000400[0]) )
                {
                    v2 = v3;
                }
                unk_20000408 = v2;
                unk_200001F9 = 1;
                sub_8006246();
                byte_200001F4 = 0;
                if ( (error_bits & 0x4000000) == 0 )
                {
                    if ( sub_8003870() < 1 )
                    {
                        word_20000204 = -1;
                    }
                    else
                    {
                        word_20000204 = 1;
                    }
                }
            }
            error_bits |= 0x40000u;
            error_bits &= ~0x20000u;
        }
        if ( (error_bits & 0x10000) == 0
          && v7 >= 15
          && (main_loop_state == 1 || main_loop_state == 3 || main_loop_state == 4) )
        {
            sub_8005684();
            error_bits |= 0x10000u;
            if ( main_loop_state == 1 )
            {
                word_200004A8[0] = 0;
                sub_80056A8(0);
                sub_80055D0();
                word_200004A8[1] = mb_get_speed();
                sub_8003248();
            }
            else
            {
                sub_80056A8((__int16)dword_2000049C);
                word_200004A8[0] = dword_2000049C;
            }
            word_200001FE = 0;
            byte_200001F4 = 0;
            if ( (error_bits & 0x4000000) != 0 )
            {
                if ( word_20000204 >= 1 )
                {
                    goto LABEL_45;
                }
            }
            else
            {
                if ( sub_8003870() >= 1 )
                {
                    word_20000204 = 1;
LABEL_45:
                    unk_200003E0 = 0;
                    dword_200003E8 = 0;
LABEL_42:
                    sub_8006818(1);
                    if ( main_loop_state == 1 )
                    {
                        main_loop_state = 2;
                    }
                    return;
                }
                word_20000204 = -1;
            }
            unk_200003E4 = 0;
            dword_200003EC = 0;
            goto LABEL_42;
        }
    }
}
// 80029A4: positive sp value 228 has been found
// 8002C1C: mask 0xFFFC is shortened because r0.2 <= 0x7FFF
// 8002A04: variable 'v7' is possibly undefined
// 200001F4: using guessed type char byte_200001F4;
// 200001FC: using guessed type unsigned __int8 byte_200001FC[2];
// 200001FE: using guessed type unsigned __int16 word_200001FE;
// 20000204: using guessed type __int16 word_20000204;
// 20000218: using guessed type unsigned __int16 word_20000218;
// 20000230: using guessed type __int16 word_20000230;
// 200002FC: using guessed type int dword_200002FC;
// 200003B4: using guessed type __int16 runtime_selected_gear_mode_const_1;
// 200003B6: using guessed type __int16 runtime_selected_gear_mode_const_2;
// 200003C4: using guessed type __int16 word_200003C4;
// 200003DC: using guessed type __int16 word_200003DC;
// 200003E8: using guessed type int dword_200003E8;
// 200003EC: using guessed type int dword_200003EC;
// 200003F4: using guessed type __int16 word_200003F4;
// 200003F8: using guessed type int dword_200003F8;
// 200003FC: using guessed type int dword_200003FC;
// 20000400: using guessed type int byte_20000400[11];
// 20000404: using guessed type int unk_20000404[10];
// 2000049C: using guessed type int dword_2000049C;
// 200004A8: using guessed type _WORD word_200004A8[3];
// 200004AA: using guessed type _WORD;
// 200004B1: using guessed type char main_loop_state;
// 200004B6: using guessed type char byte_200004B6;
// 48000000: using guessed type GPIO_PORT_STRUCT GPIO_A;
// 8002954: using guessed type int anonymous_0[197];

//----- (08002C98) --------------------------------------------------------
unsigned int __fastcall sub_8002C98(unsigned int a1)
{
    int v1; // r3
    __int16 *v2; // r4
    unsigned int v3; // r5
    unsigned int result; // r0

    if ( a1 < 0xF88 )
    {
        if ( a1 >= 0x17F )
        {
            LOBYTE(v1) = byte_20000198[1];
            v2 = &some_calc_factor_3[byte_20000198[1]];
            v3 = (unsigned __int16)*v2;
            if ( v3 >= a1 )
            {
                if ( a1 < v3 && a1 < (unsigned __int16)*(v2 - 1) )
                {
                    do
                    {
                        v1 = (unsigned __int8)(v1 - 1);
                        if ( a1 >= (unsigned __int16)some_calc_factor_3[v1 - 1] )
                        {
                            break;
                        }
                        v1 = (unsigned __int8)(v1 - 1);
                        if ( a1 >= (unsigned __int16)some_calc_factor_3[v1 - 1] )
                        {
                            break;
                        }
                        v1 = (unsigned __int8)(v1 - 1);
                        if ( a1 >= (unsigned __int16)some_calc_factor_3[v1 - 1] )
                        {
                            break;
                        }
                        v1 = (unsigned __int8)(v1 - 1);
                    }
                    while ( a1 < (unsigned __int16)some_calc_factor_3[v1 - 1] );
                }
            }
            else if ( (unsigned __int16)v2[1] < a1 )
            {
                do
                {
                    v1 = (unsigned __int8)(v1 + 1);
                    if ( (unsigned __int16)some_calc_factor_3[v1 + 1] >= a1 )
                    {
                        break;
                    }
                    v1 = (unsigned __int8)(v1 + 1);
                    if ( (unsigned __int16)some_calc_factor_3[v1 + 1] >= a1 )
                    {
                        break;
                    }
                    v1 = (unsigned __int8)(v1 + 1);
                    if ( (unsigned __int16)some_calc_factor_3[v1 + 1] >= a1 )
                    {
                        break;
                    }
                    v1 = (unsigned __int8)(v1 + 1);
                }
                while ( (unsigned __int16)some_calc_factor_3[v1 + 1] < a1 );
            }
        }
        else
        {
            LOBYTE(v1) = 0;
        }
    }
    else
    {
        LOBYTE(v1) = -81;
    }
    byte_20000198[1] = v1;
    result = (unsigned __int8)(v1 + 10);
    if ( result >= 0xB0 )
    {
        result = 175;
    }
    byte_20000198[2] = result;
    return result;
}
// 8007668: using guessed type __int16 some_calc_factor_3[50];
// 20000198: using guessed type unsigned __int8 byte_20000198[3];
// 20000199: using guessed type unsigned __int8;
// 2000019A: using guessed type unsigned __int8;

//----- (08002D64) --------------------------------------------------------
int sub_8002D64()
{
    return (__int16)(byte_20000198[1] - 25);
}
// 20000198: using guessed type unsigned __int8 byte_20000198[3];

//----- (08002D7C) --------------------------------------------------------
void copy_config_type_1_to_flash()
{
    char checksum; // r2
    char *data; // r0
    int v2; // r1

    if ( is_wdt_enabled == 1 )
    {
        ping_wdt();
    }
    checksum = 0;
    data = (char *)&runtime_config_type_1.magic_A5A5_or_FFFF;
    v2 = 4;
    do
    {
        checksum += *data
                  + *((_BYTE *)&unk_00000001 + (_DWORD)data)
                  + *((_BYTE *)&unk_00000002 + (_DWORD)data)
                  + *((_BYTE *)&unk_00000003 + (_DWORD)data);
        data += 4;
        --v2;
    }
    while ( v2 );
    *(_WORD *)&runtime_config_type_1.checksum = (unsigned __int8)~checksum;
    __disable_irq();
    unlock_flash_0();
    JUMPOUT(0x8002DB8);
}
// 8002DB4: control flows out of bounds to 8002DB8
// 200004B3: using guessed type char is_wdt_enabled;

//----- (08002E1C) --------------------------------------------------------
void __cdecl copy_config_type_1_to_ram_and_validate()
{
    unsigned int index; // r0 MAPDST
    char *dst; // r1
    unsigned __int16 v2; // r2
    __int16 v4; // r2
    __int16 v5; // r2
    char checksum; // r2
    char *checksum_field_ptr; // r0
    int index_2; // r7
    int v9; // r1
    char checksum_2; // r1
    char *checksum_field_ptr_2; // r0
    unsigned int v12; // r6 MAPDST
    char *src_ptr; // r5

    index = 0;
    dst = (char *)&runtime_config_type_1;

    // Copy config type 1 to ram
    do
    {
        v2 = *(_WORD *)(&config_type_1.checksum + index);
        *dst = HIBYTE(v2);
        *((_BYTE *)&unk_00000001 + (_DWORD)dst) = v2;
        index += 2;
        v4 = *(_WORD *)(&config_type_1.checksum + index);
        *((_BYTE *)&unk_00000002 + (_DWORD)dst) = HIBYTE(v4);
        *((_BYTE *)&unk_00000003 + (_DWORD)dst) = v4;
        index += 2;
        v5 = *(_WORD *)(&config_type_1.checksum + index);
        *((_BYTE *)&unk_00000004 + (_DWORD)dst) = HIBYTE(v5);
        *((_BYTE *)&unk_00000005 + (_DWORD)dst) = v5;
        index += 2;
        dst += 6;
    }
    while ( index < 18 );
    checksum = 0;
    checksum_field_ptr = (char *)&runtime_config_type_1.magic_A5A5_or_FFFF;
    index_2 = 4;
    v9 = 4;

    // Calc checksum
    do
    {
        checksum += *checksum_field_ptr
                  + *((_BYTE *)&unk_00000001 + (_DWORD)checksum_field_ptr)
                  + *((_BYTE *)&unk_00000002 + (_DWORD)checksum_field_ptr)
                  + *((_BYTE *)&unk_00000003 + (_DWORD)checksum_field_ptr);
        checksum_field_ptr += 4;
        --v9;
    }
    while ( v9 );

    // Validate checksum
    if ( runtime_config_type_1.magic_A5A5_or_FFFF == 0xA5A5
      && (unsigned __int8)(checksum + runtime_config_type_1.checksum) == 255 )
    {
        // OK checksum
        default_configuration_used = 0;
    }
    else
    {
        // BAD checksum (I guess this will trigger a calibration of the ADCs offset values)
        default_configuration_used = 1;
        // Ensure bad config ?
        runtime_config_type_1.magic_A5A5_or_FFFF = 0xFFFF;
        if ( is_wdt_enabled == 1 )
        {
            ping_wdt();
        }
        checksum_2 = 0;
        checksum_field_ptr_2 = (char *)&runtime_config_type_1.magic_A5A5_or_FFFF;
        do
        {
            checksum_2 += *checksum_field_ptr_2
                        + *((_BYTE *)&unk_00000001 + (_DWORD)checksum_field_ptr_2)
                        + *((_BYTE *)&unk_00000002 + (_DWORD)checksum_field_ptr_2)
                        + *((_BYTE *)&unk_00000003 + (_DWORD)checksum_field_ptr_2);
            checksum_field_ptr_2 += 4;
            --index_2;
        }
        while ( index_2 );
        *(_WORD *)&runtime_config_type_1.checksum = (unsigned __int8)~checksum_2;
        __disable_irq();
        unlock_flash_0();
        flash_erase_page_0((int)&config_type_1);
        v12 = 0;
        src_ptr = (char *)&runtime_config_type_1;
        do
        {
            if ( is_wdt_enabled == 1 )
            {
                ping_wdt();
            }
            flash_write_word(
                (char *)&unk_800EFFF + ++v12,
                ((unsigned __int8)*src_ptr << 8) + (unsigned __int8)src_ptr[1]);
            ++v12;
            src_ptr += 2;
        }
        while ( v12 < 0x12 );
        lock_flash_0();
        __enable_irq();
        runtime_config_type_1.use_limited_profile = 1;
    }
}
// 200004B3: using guessed type char is_wdt_enabled;

//----- (08002F10) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void copy_config_type_2_to_flash()
{
    runtime_config_type_2.magic_A5A5 = 0xA5A5;
    runtime_config_type_2.checksum = (unsigned __int8)~(2 * (_DWORD)&unk_000000A5
                                                      + LOBYTE(runtime_config_type_2.def_neg_75_max_150)
                                                      + HIBYTE(runtime_config_type_2.def_neg_75_max_150)
                                                      + LOBYTE(runtime_config_type_2.def_8000_max_8800)
                                                      + HIBYTE(runtime_config_type_2.def_8000_max_8800));
    __disable_irq();
    unlock_flash_0();
    flash_erase_page_0((int)&config_type_2);
    ping_wdt();
    flash_write_word(
        &config_type_2,
        (LOBYTE(runtime_config_type_2.checksum) << 8) + HIBYTE(runtime_config_type_2.checksum));
    ping_wdt();
    flash_write_word(
        &config_type_2.magic_A5A5,
        (LOBYTE(runtime_config_type_2.magic_A5A5) << 8) + HIBYTE(runtime_config_type_2.magic_A5A5));
    ping_wdt();
    flash_write_word(
        &config_type_2.def_neg_75_max_150,
        (LOBYTE(runtime_config_type_2.def_neg_75_max_150) << 8) + HIBYTE(runtime_config_type_2.def_neg_75_max_150));
    ping_wdt();
    JUMPOUT(0x8002F82);
}
// 8002F9A: positive sp value 128 has been found
// 8002F7E: control flows out of bounds to 8002F82

//----- (08002FA0) --------------------------------------------------------
void __cdecl copy_config_type_2_to_ram_and_validate()
{
    LOBYTE(runtime_config_type_2.checksum) = HIBYTE(config_type_2.checksum);
    HIBYTE(runtime_config_type_2.checksum) = config_type_2.checksum;
    LOBYTE(runtime_config_type_2.magic_A5A5) = HIBYTE(config_type_2.magic_A5A5);
    HIBYTE(runtime_config_type_2.magic_A5A5) = config_type_2.magic_A5A5;
    LOBYTE(runtime_config_type_2.def_neg_75_max_150) = HIBYTE(config_type_2.def_neg_75_max_150);
    HIBYTE(runtime_config_type_2.def_neg_75_max_150) = config_type_2.def_neg_75_max_150;
    LOBYTE(runtime_config_type_2.def_8000_max_8800) = HIBYTE(config_type_2.def_8000_max_8800);
    HIBYTE(runtime_config_type_2.def_8000_max_8800) = config_type_2.def_8000_max_8800;
    if ( (unsigned __int16)runtime_config_type_2.magic_A5A5 == 0xA5A5
      && (unsigned __int8)(HIBYTE(config_type_2.magic_A5A5)
                         + LOBYTE(config_type_2.magic_A5A5)
                         + HIBYTE(config_type_2.def_neg_75_max_150)
                         + LOBYTE(config_type_2.def_neg_75_max_150)
                         + LOBYTE(runtime_config_type_2.def_8000_max_8800)
                         + HIBYTE(runtime_config_type_2.def_8000_max_8800)
                         + LOBYTE(runtime_config_type_2.checksum)) == 255 )
    {
        default_configuration_used = 0;
    }
    else
    {
        // Default values
        runtime_config_type_2.def_neg_75_max_150 = 0;
        runtime_config_type_2.def_8000_max_8800 = 0x8000;
    }
}

//----- (08003018) --------------------------------------------------------
void __cdecl sub_8003018()
{
    __int16 *v0; // r0
    int *v1; // r1
    __int16 v2; // r0
    char new_state; // r0

    if ( (error_bits & BIT_19) != 0 && main_loop_state == 14 && system_is_fine() )
    {
        main_loop_state = 1;
    }
    // PB9
    if ( is_input_port_bit_set(&GPIO_B, 0x200) )
    {
        word_2000021A = 0;
        if ( word_2000021C[0] < 0xC8u )
        {
            ++word_2000021C[0];
        }
        else if ( (error_bits & BIT_19) != 0 )
        {
            if ( (error_bits & BIT_16) != 0 )
            {
                sub_8006818(0);
                dword_200002FC = sub_80057DC() << 11;
                error_bits &= ~(BIT_23|BIT_19|BIT_16);
                sub_80044A0();
                sub_80056F8();
            }
            else
            {
                error_bits &= ~(BIT_23|BIT_19|BIT_16);
                word_200001FE = 0;
                word_200004A8[0] = 0;
                sub_80044A0();
                if ( main_loop_state != 1 && main_loop_state != 10 && main_loop_state != 14 )
                {
                    main_loop_state = 6;
                }
            }
            sub_800500C();
        }
    }
    else
    {
        word_2000021C[0] = 0;
        if ( word_2000021A < 0xC8u )
        {
            ++word_2000021A;
            return;
        }
        if ( (error_bits & BIT_19) == 0 )
        {
            word_200001FE = 0;
            error_bits |= BIT_19;
            if ( !main_loop_state )
            {
                main_loop_state = 1;
            }
            unk_200003E0 = -dword_200002A8;
            unk_200003E4 = dword_200002A8;
            dword_200003E8 = -16384 * dword_200002A8;
            dword_200003EC = dword_200002A8 << 14;
        }
        if ( (error_bits & 0x800000) == 0 )
        {
            if ( (__int16)mb_some_speed() < 15 )
            {
                if ( main_loop_state == 1 || main_loop_state == 10 )
                {
                    error_bits |= 0x800000u;
                    sub_80044A0();
                }
            }
            else if ( (error_bits & 0x10000) == 0
                   && (main_loop_state == 1 || main_loop_state == 10 || main_loop_state == 3 || main_loop_state == 4) )
            {
                sub_8005684();
                if ( main_loop_state == 1 || main_loop_state == 10 )
                {
                    word_200004A8[0] = 0;
                    sub_80056A8(0);
                    sub_80055D0();
                    v0 = &word_2000031E;
                    v1 = (int *)word_200004A8;
                }
                else
                {
                    sub_80056A8((__int16)dword_2000049C);
                    v0 = word_200004A8;
                    v1 = &dword_2000049C;
                }
                *v0 = *(_WORD *)v1;
                word_200001FE = 0;
                error_bits |= 0x10000u;
                byte_200001F4 = 0;
                if ( mb_some_speed() )
                {
                    v2 = 1;
                }
                else
                {
                    v2 = -1;
                }
                word_20000204 = v2;
                sub_8006818(1);
                if ( main_loop_state == 1 || main_loop_state == 10 )
                {
                    main_loop_state = 2;
                    sub_8003248();
                }
            }
            return;
        }
        if ( main_loop_state == 1 )
        {
            unk_20000206 = 10000;
            if ( !mb_some_speed() )
            {
                return;
            }
            new_state = 2;
            goto LABEL_37;
        }
        if ( main_loop_state == 10 )
        {
            new_state = 1;
LABEL_37:
            main_loop_state = new_state;
            return;
        }
        if ( main_loop_state == 15 && unk_20000206 )
        {
            --unk_20000206;
        }
    }
}
// 8003092: conditional instruction was optimized away because r0.4<10000u
// 200001F4: using guessed type char byte_200001F4;
// 200001FE: using guessed type unsigned __int16 word_200001FE;
// 20000204: using guessed type __int16 word_20000204;
// 2000021A: using guessed type unsigned __int16 word_2000021A;
// 2000021C: using guessed type unsigned __int16 word_2000021C[2];
// 200002A8: using guessed type int dword_200002A8;
// 200002FC: using guessed type int dword_200002FC;
// 2000031E: using guessed type __int16 word_2000031E;
// 200003E8: using guessed type int dword_200003E8;
// 200003EC: using guessed type int dword_200003EC;
// 2000049C: using guessed type int dword_2000049C;
// 200004A8: using guessed type _WORD word_200004A8[3];
// 200004B1: using guessed type char main_loop_state;

//----- (08003200) --------------------------------------------------------
BOOL sub_8003200()
{
    return *(_WORD *)&byte_200001F4[18] == 0;
}
// 200001F4: using guessed type unsigned __int8 byte_200001F4[76];

//----- (08003214) --------------------------------------------------------
char *sub_8003214()
{
    char *result; // r0

    result = (char *)*(unsigned __int16 *)&byte_200001F4[18];
    if ( !*(_WORD *)&byte_200001F4[18] )
    {
        return sub_800321E();
    }
    return result;
}
// 200001F4: using guessed type unsigned __int8 byte_200001F4[76];

//----- (0800321E) --------------------------------------------------------
char *sub_800321E()
{
    char *result; // r0

    result = (char *)sub_8003CCA();
    if ( !result )
    {
        main_loop_state = 6;
        return sub_80044A0();
    }
    return result;
}
// 200004B1: using guessed type char main_loop_state;

//----- (08003238) --------------------------------------------------------
void *sub_8003238()
{
    void *result; // r0

    result = &dword_200001EC;
    byte_200001F4[3] = 0;
    return result;
}
// 200001F4: using guessed type unsigned __int8 byte_200001F4[76];
// 200001F7: using guessed type unsigned __int8;

//----- (08003248) --------------------------------------------------------
int sub_8003248()
{
    int speed; // r0
    signed int v1; // r0
    signed int v2; // r1
    int v3; // r4
    int divived_from_runtime_config_type_2_def_8000_max_8800; // r0
    int result; // r0
    int v6; // r2

    speed = mb_get_speed();
    if ( unk_200001F7 )
    {
        v1 = dword_200001EC * speed;
        v2 = word_20000208;
        goto LABEL_13;
    }
    if ( speed < 1 )
    {
        if ( speed >= 0 )
        {
            if ( (error_bits & 0x2000000) == 0 )
            {
LABEL_9:
                speed = 80;
                goto LABEL_11;
            }
        }
        else if ( speed < -79 )
        {
            goto LABEL_11;
        }
        speed = -80;
        goto LABEL_11;
    }
    if ( speed < 80 )
    {
        goto LABEL_9;
    }
LABEL_11:
    v1 = speed << 15;
    v2 = 2426;
LABEL_13:
    v3 = divide_0(v1, v2);
    divived_from_runtime_config_type_2_def_8000_max_8800 = get_divived_from_runtime_config_type_2_def_8000_max_8800();
    result = divide_0(960 * v3, divived_from_runtime_config_type_2_def_8000_max_8800) << 14;
    v6 = dword_200003EC;
    if ( dword_200003EC < result || (v6 = dword_200003E8, result < dword_200003E8) )
    {
        result = v6;
    }
    unk_200003F0 = result;
    return result;
}
// 200001EC: using guessed type int dword_200001EC;
// 20000208: using guessed type __int16 word_20000208;
// 200003E8: using guessed type int dword_200003E8;
// 200003EC: using guessed type int dword_200003EC;

//----- (080032F0) --------------------------------------------------------
unsigned int __fastcall sub_80032F0(unsigned int a1)
{
    int v1; // r2
    int v2; // r2
    unsigned int result; // r0

    v1 = RCC_CFGR;
    RCC_CFGR = v1 & 0xFFFFBFFF;
    RCC_CFGR = (unsigned __int16)a1 | v1 & 0xFFFFBFFF;
    v2 = RCC_CFGR3;
    RCC_CFGR3 = v2 & 0xFFFFFEFF;
    result = HIWORD(a1) | v2 & 0xFFFFFEFF;
    RCC_CFGR3 = result;
    return result;
}
// 40021004: using guessed type int RCC_CFGR;
// 40021030: using guessed type int RCC_CFGR3;

//----- (08003314) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
int __fastcall some_struct_fill(unsigned int *a1)
{
    char v2; // r0
    unsigned int v3; // r7
    unsigned int v4; // r7
    int v5; // r0
    int prediv; // r1
    int v7; // r6
    unsigned int v8; // r1
    unsigned int v9; // r2
    unsigned int v10; // r1
    __int16 v11; // r0
    int v12; // r0
    char v13; // r0
    int v14; // r0
    char v15; // r0
    int v16; // r0
    int result; // r0
    int v18; // r1
    int v19; // r1
    char v20; // r1

    v2 = RCC_CFGR;
    if ( (v2 & 0xC) == 8 )
    {
        v3 = ((unsigned int)RCC_CFGR >> 18) & 0xF;
        v4 = v3 + 2;
        if ( (RCC_CFGR & 0x10000) != 0 )
        {
            prediv = RCC_CFGR2 & 0xF;
            v5 = mb_divide(8000000u, prediv + 1) * v4;
        }
        else
        {
            v5 = 4000000 * v4;
        }
    }
    else
    {
        v5 = 8000000;
    }
    *a1 = v5;
    v7 = (unsigned __int8)RCC_CFGR >> 4;
    v8 = *a1 >> byte_200002B4[v7];
    a1[1] = v8;
    v9 = (unsigned int)(RCC_CFGR << 21) >> 29;
    v10 = v8 >> byte_200002B4[v9];
    *(_DWORD *)((char *)&unk_00000008 + (_DWORD)a1) = v10;
    v11 = RCC_CFGR3;
    if ( (v11 & 0x100) != 0 )
    {
        if ( (RCC_CFGR & 0x4000) != 0 )
        {
            v12 = v10 >> 2;
        }
        else
        {
            v12 = v10 >> 1;
        }
    }
    else
    {
        v12 = 14000000;
    }
    a1[3] = v12;
    v13 = RCC_CFGR3;
    if ( (v13 & 0x40) != 0 )
    {
        v14 = 0x8000;
    }
    else
    {
        v14 = 32786;
    }
    a1[4] = v14;
    v15 = RCC_CFGR3;
    if ( (v15 & 0x10) != 0 )
    {
        v16 = *a1;
    }
    else
    {
        v16 = 8000000;
    }
    a1[5] = v16;
    if ( (RCC_CFGR3 & 3) != 0 )
    {
        v18 = RCC_CFGR3 & 3;
        if ( v18 == 1 )
        {
            result = *a1;
        }
        else
        {
            v19 = RCC_CFGR3 & 3;
            if ( v19 == 2 )
            {
                result = 0x8000;
            }
            else
            {
                v20 = RCC_CFGR3;
                result = v20 & 3;
                if ( result != 3 )
                {
                    return result;
                }
                result = 8000000;
            }
        }
    }
    else
    {
        result = *(_DWORD *)((char *)&unk_00000008 + (_DWORD)a1);
    }
    *(_DWORD *)((char *)&unk_00000018 + (_DWORD)a1) = result;
    return result;
}
// 800334A: positive sp value 64 has been found
// 200002B4: using guessed type _BYTE byte_200002B4[16];
// 40021004: using guessed type int RCC_CFGR;
// 4002102C: using guessed type int RCC_CFGR2;
// 40021030: using guessed type int RCC_CFGR3;

//----- (080033D6) --------------------------------------------------------
void __fastcall sub_80033D6(int result, int a2)
{
    bool v2; // zf
    int v3; // r1

    v2 = a2 == 0;
    v3 = RCC_AHBENR;
    if ( v2 )
    {
        RCC_AHBENR = v3 & ~result;
    }
    else
    {
        RCC_AHBENR = result | v3;
    }
}
// 40021014: using guessed type int RCC_AHBENR;

//----- (080033EA) --------------------------------------------------------
int __fastcall RCC_APB2ENR_clear_or_set(int result, int a2)
{
    bool v2; // zf
    int v3; // r1

    v2 = a2 == 0;
    v3 = RCC_APB2ENR;
    if ( v2 )
    {
        RCC_APB2ENR = v3 & ~result;
    }
    else
    {
        result |= v3;
        RCC_APB2ENR = result;
    }
    return result;
}
// 40021018: using guessed type int RCC_APB2ENR;

//----- (080033FE) --------------------------------------------------------
void __fastcall sub_80033FE(int result, int a2)
{
    bool v2; // zf
    int v3; // r1

    v2 = a2 == 0;
    v3 = RCC_APB1ENR;
    if ( v2 )
    {
        RCC_APB1ENR = v3 & ~result;
    }
    else
    {
        RCC_APB1ENR = result | v3;
    }
}
// 4002101C: using guessed type int RCC_APB1ENR;

//----- (08003418) --------------------------------------------------------
int __fastcall sub_8003418(int result, int a2)
{
    bool v2; // zf
    int v3; // r1

    v2 = a2 == 0;
    v3 = RCC_APB1RSTR;
    if ( v2 )
    {
        RCC_APB1RSTR = v3 & ~result;
    }
    else
    {
        result |= v3;
        RCC_APB1RSTR = result;
    }
    return result;
}
// 40021010: using guessed type int RCC_APB1RSTR;

//----- (0800342C) --------------------------------------------------------
bool __fastcall was_reset_by_software_reason(unsigned int mask)
{
    unsigned int v1; // r1
    unsigned int v2; // r1

    v1 = mask >> 5;
    if ( mask >> 5 )
    {
        if ( v1 == 1 )
        {
            v2 = RCC_BDCR;
        }
        else if ( v1 == 2 )
        {
            v2 = RCC_CSR;
        }
        else
        {
            v2 = RCC_CR2;
        }
    }
    else
    {
        v2 = RCC_CR;
    }
    return (v2 >> (mask & 0x1F)) & 1;
}
// 40021000: using guessed type int RCC_CR;
// 40021020: using guessed type int RCC_BDCR;
// 40021024: using guessed type int RCC_CSR;
// 40021034: using guessed type int RCC_CR2;

//----- (08003488) --------------------------------------------------------
void __fastcall init_port(GPIO_PORT_STRUCT *a1, struc_20000A30 *a2)
{
    char pin; // r3
    unsigned int i; // r2
    int type; // r5
    int mask; // r4

    pin = 0;
    for ( i = 0; i < 0x10; ++i )
    {
        // bit loop
        if ( (a2->bits & (1 << i)) == 1 << i )
        {
            type = (unsigned __int8)a2->type;
            if ( type == 1 || type == 2 )
            {
                a1->OSPEEDR &= ~(3 << pin);
                a1->OSPEEDR |= (unsigned __int8)a2->speed << pin;
                LOWORD(a1->OTYPER) &= ~(unsigned __int16)(1 << i);
                LOWORD(a1->OTYPER) |= LOBYTE(a2->pullup_type) << i;
            }
            mask = ~(3 << pin);
            a1->MODER &= mask;
            a1->MODER |= (unsigned __int8)a2->type << pin;
            a1->PUPDR &= mask;
            a1->PUPDR |= HIBYTE(a2->pullup_type) << pin;
        }
        pin += 2;
    }
}

//----- (080034FA) --------------------------------------------------------
struc_20000A30 *__fastcall init_struc_20000A30(struc_20000A30 *result)
{
    result->bits = 0xFFFF;
    result->type = 0;
    result->speed = 2;
    result->pullup_type = 0;
    return result;
}

//----- (08003510) --------------------------------------------------------
int __fastcall sub_8003510(int a1, int a2)
{
    *(_DWORD *)(a1 + 28) = a2 | 0x10000;
    *(_DWORD *)(a1 + 28) = a2;
    *(_DWORD *)(a1 + 28) = a2 | 0x10000;
    return *(_DWORD *)(a1 + 28);
}

//----- (08003534) --------------------------------------------------------
BOOL __fastcall is_input_port_bit_set(GPIO_PORT_STRUCT *port, __int16 bits)
{
    return (unsigned __int16)(port->IDR & bits) != 0;
}

//----- (08003542) --------------------------------------------------------
unsigned int __fastcall gpio_get_port_value(GPIO_PORT_STRUCT *port)
{
    return LOWORD(port->IDR);
}

//----- (08003546) --------------------------------------------------------
void __fastcall set_GPIO_pin(GPIO_PORT_STRUCT *port, int bits)
{
    port->BSRR = bits;
}

//----- (0800354A) --------------------------------------------------------
void __fastcall reset_GPIO_pin(GPIO_PORT_STRUCT *result, __int16 a2)
{
    LOWORD(result->BRR) = a2;
}

//----- (0800354E) --------------------------------------------------------
int __fastcall sub_800354E(int a1, unsigned int a2, int a3)
{
    int result; // r0
    char v4; // r1

    result = a1 + 4 * (a2 >> 3);
    v4 = (4 * a2) & 0x1F;
    *(_DWORD *)(result + 32) &= ~(15 << v4);
    *(_DWORD *)(result + 32) |= a3 << v4;
    return result;
}

//----- (08003570) --------------------------------------------------------
int *__fastcall sub_8003570(int *result)
{
    int v1; // r1
    int v2; // r2

    *result &= 0xFFFEu;
    *result = 0;
    result[1] = 0;
    result[2] = 0;
    result[3] = 0;
    if ( result == (int *)&DMA1_CCR1 )
    {
        result = &DMA1_IFCR;
        v1 = DMA1_IFCR;
        v2 = 15;
    }
    else if ( result == &DMA1_CCR2 )
    {
        result = &DMA1_IFCR;
        v1 = DMA1_IFCR;
        v2 = 240;
    }
    else if ( result == &DMA1_CCR3 )
    {
        result = &DMA1_IFCR;
        v1 = DMA1_IFCR;
        v2 = 3840;
    }
    else if ( result == &DMA1_CCR4 )
    {
        result = &DMA1_IFCR;
        v1 = DMA1_IFCR;
        v2 = 61440;
    }
    else
    {
        if ( result != &DMA1_CCR5 )
        {
            return result;
        }
        result = &DMA1_IFCR;
        v1 = DMA1_IFCR;
        v2 = 983040;
    }
    DMA1_IFCR = v2 | v1;
    return result;
}
// 40020004: using guessed type int DMA1_IFCR;
// 4002001C: using guessed type int DMA1_CCR2;
// 40020030: using guessed type int DMA1_CCR3;
// 40020044: using guessed type int DMA1_CCR4;
// 40020058: using guessed type int DMA1_CCR5;

//----- (080035D2) --------------------------------------------------------
void __fastcall sub_80035D2(unsigned int *dma_ptr, unsigned int *adc_values)
{
    *dma_ptr = adc_values[10] | adc_values[9] | adc_values[7] | adc_values[6] | adc_values[5] | adc_values[4] | adc_values[8] | adc_values[2] | *dma_ptr & 0xFFFF800F;
    dma_ptr[1] = adc_values[3];
    dma_ptr[2] = *adc_values;
    dma_ptr[3] = adc_values[1];
}

//----- (08003608) --------------------------------------------------------
int *__fastcall sub_8003608(int *result, int a2)
{
    int v2; // r2

    if ( a2 )
    {
        v2 = *result | 1;
    }
    else
    {
        v2 = *result & 0xFFFE;
    }
    *result = v2;
    return result;
}

//----- (0800362C) --------------------------------------------------------
int __fastcall sub_800362C(int result, int a2)
{
    *(_DWORD *)(result + 36) = a2;
    return result;
}

//----- (08003630) --------------------------------------------------------
_WORD *__fastcall mb_start_stop_timer(int a1, int a2)
{
    __int16 v2; // r1
    _WORD *result; // r0
    __int16 v4; // r1

    if ( a2 )
    {
        v2 = *(_WORD *)(a1 + 68);
        result = (_WORD *)(a1 + 68);
        *result = v2 | 0x8000;
    }
    else
    {
        v4 = *(_WORD *)(a1 + 68) & 0x7FFF;
        result = (_WORD *)(a1 + 68);
        *result = v4;
    }
    return result;
}

//----- (08003652) --------------------------------------------------------
void __fastcall sub_8003652(int result, __int16 a2, int a3)
{
    bool v3; // zf
    __int16 v4; // r2

    v3 = a3 == 0;
    v4 = *(_WORD *)(result + 12);
    if ( v3 )
    {
        *(_WORD *)(result + 12) = v4 & ~a2;
    }
    else
    {
        *(_WORD *)(result + 12) = a2 | v4;
    }
}

//----- (08003664) --------------------------------------------------------
BOOL __fastcall check_timer_status_bit(int a1, __int16 bit)
{
    return (unsigned __int16)(*(_WORD *)(a1 + 16) & bit) != 0;
}

//----- (08003672) --------------------------------------------------------
int __fastcall sub_8003672(int result, __int16 a2)
{
    *(_WORD *)(result + 16) = ~a2;
    return result;
}

//----- (08003678) --------------------------------------------------------
int __fastcall turn_on_adc_channel_and_set_sample_and_hold_time(int result, int a2, int a3)
{
    *(_DWORD *)(result + 0x28) |= a2;
    *(_DWORD *)(result + 0x14) = a3;
    return result;
}

//----- (08003682) --------------------------------------------------------
int __fastcall sub_8003682(int a1)
{
    int result; // r0
    int v3; // r2

    result = 0;
    v3 = 0;
    *(_DWORD *)(a1 + 8) |= 0x80000000;
    do
    {
        ++v3;
    }
    while ( v3 != 61440 && *(int *)(a1 + 8) < 0 );
    if ( *(int *)(a1 + 8) >= 0 )
    {
        return *(_DWORD *)(a1 + 64);
    }
    return result;
}

//----- (080036B0) --------------------------------------------------------
int __fastcall get_adc_value(struct_adc *a1)
{
    return (unsigned __int16)a1->DR[0];
}

//----- (080036B6) --------------------------------------------------------
int __fastcall mb_adc_wait(struct_adc *a1, int a2)
{
    int result; // r0
    unsigned int ISR; // r2

    result = 0;
    if ( (a2 & 0x1000000) != 0 )
    {
        ISR = a1->CR & 0xFEFFFFFF;
    }
    else
    {
        ISR = a1->ISR;
    }
    if ( (a2 & ISR) != 0 )
    {
        return 1;
    }
    return result;
}

//----- (080036D4) --------------------------------------------------------
void __fastcall sub_80036D4(unsigned __int8 *a1)
{
    int v1; // r3
    int v2; // r2
    int *v3; // r0

    v1 = *a1;
    if ( a1[2] )
    {
        *(int *)((char *)&NVIC_IPR0 + (v1 & 0xFFFFFFFC)) = ((unsigned __int8)(a1[1] << 6) << ((8 * v1) & 0x1F)) | *(int *)((char *)&NVIC_IPR0 + (v1 & 0xFFFFFFFC)) & ~(255 << ((8 * v1) & 0x1F));
        v2 = 1 << (*a1 & 0x1F);
        v3 = &NVIC_ISER;
    }
    else
    {
        v2 = 1 << (v1 & 0x1F);
        v3 = &NVIC_ICER;
    }
    *v3 = v2;
}
// E000E100: using guessed type int NVIC_ISER;
// E000E180: using guessed type int NVIC_ICER;
// E000E400: using guessed type int NVIC_IPR0;

//----- (08003728) --------------------------------------------------------
void sub_8003728()
{
    int AFRL; // r1
    int AFRH; // r1
    int v2; // r1
    int v3; // r1
    struc_20000A30 v4; // [sp+0h] [bp-20h] BYREF
    char v5[24]; // [sp+8h] [bp-18h] BYREF

    sub_80033FE(1, 1);
    sub_80033D6(0x60000, 1);
    init_struc_20000A30(&v4);
    AFRL = GPIO_A.AFRL;
    GPIO_A.AFRL = AFRL | 0x20;
    AFRH = GPIO_A.AFRH;
    GPIO_A.AFRH = AFRH | 0x20000000;
    v2 = GPIO_B.AFRH;
    GPIO_B.AFRH = v2 | 0x200;
    HIBYTE(v4.pullup_type) = 1;
    v4.bits = 32770;
    v4.type = 2;
    init_port(&GPIO_A, &v4);
    v4.bits = 1024;
    init_port(&GPIO_B, &v4);
    v3 = RCC_APB1RSTR;
    RCC_APB1RSTR = v3 | 1;
    RCC_APB1RSTR = v3 & 0xFFFFFFFE;
    LOWORD(TIM2_CR1) = 516;
    LOWORD(TIM2_CR2) = 128;
    LOWORD(TIM2_CCMR1_Output) = 227;
    TIM2_ARR = -1;
    LOWORD(TIM2_CCER) = 1;
    LOWORD(TIM2_SMCR) = 68;
    v5[0] = 15;
    v5[1] = 2;
    v5[2] = 1;
    init_NVIC((unsigned __int8 *)v5);
    LOWORD(TIM2_SR) = -3;
    LOWORD(TIM2_DIER) = TIM2_DIER | 2;
    TIM2_CNT = 0;
    LOWORD(TIM2_CR1) = TIM2_CR1 | 1;
    sub_80037D8();
}
// 40000000: using guessed type int TIM2_CR1;
// 40000004: using guessed type int TIM2_CR2;
// 40000008: using guessed type int TIM2_SMCR;
// 4000000C: using guessed type int TIM2_DIER;
// 40000010: using guessed type int TIM2_SR;
// 40000018: using guessed type int TIM2_CCMR1_Output;
// 40000020: using guessed type int TIM2_CCER;
// 40000024: using guessed type int TIM2_CNT;
// 4000002C: using guessed type int TIM2_ARR;
// 40021010: using guessed type int RCC_APB1RSTR;
// 48000000: using guessed type GPIO_PORT_STRUCT GPIO_A;
// 8003728: using guessed type unsigned __int8 var_18[24];

//----- (080037D8) --------------------------------------------------------
void sub_80037D8()
{
    sub_8003652((int)&TIM2_CR1, 2, 0);
    unk_200000C4 = 0;
    word_200000F4 = 0;
    unk_200000CA = 0;
    word_200000F6 = 1274;
    unk_20000120 = 0;
    unk_20000124 = 0;
    word_200000FA = 4500;
    byte_200000CB = 0;
    unk_200000CC = 4;
    unk_200000C2 = 0;
    unk_200000C3 = 0;
    dword_20000100 = -1;
    word_200000DC = 0;
    word_200000E0 = 0;
    word_200000DE = 0;
    word_200000E2 = 0;
    word_200000F0 = 0;
    word_200000F2 = 0;
    byte_200000C8 = 0;
    unk_200000CD = 0;
    unk_200000CE = 0;
    word_200001D4 = -1;
    word_200002DA = -1;
    sub_8003CD8();
    word_200000E8 = 0;
    unk_200000E4 = 0;
    unk_200000EA = 0;
    sub_800362C((int)&TIM2_CR1, 0);
    get_motor_sector_position_0();
    sub_8003EE4();
    sub_8003BEC();
    sub_8006230();
    sub_8003672((int)&TIM2_CR1, 2);
    sub_8003652((int)&TIM2_CR1, 2, 1);
}
// 200000C8: using guessed type char byte_200000C8;
// 200000CB: using guessed type char byte_200000CB;
// 200000DE: using guessed type __int16 word_200000DE;
// 200000E0: using guessed type __int16 word_200000E0;
// 200000E2: using guessed type __int16 word_200000E2;
// 200000E8: using guessed type unsigned __int16 word_200000E8;
// 200000F0: using guessed type __int16 word_200000F0;
// 200000F2: using guessed type __int16 word_200000F2;
// 200000F6: using guessed type __int16 word_200000F6;
// 200000FA: using guessed type __int16 word_200000FA;
// 20000100: using guessed type unsigned int dword_20000100;
// 200001D4: using guessed type __int16 word_200001D4;
// 200002DA: using guessed type __int16 word_200002DA;
// 40000000: using guessed type int TIM2_CR1;
// 200000DC: using guessed type __int16 word_200000DC;

//----- (08003860) --------------------------------------------------------
int sub_8003860()
{
    return *(__int16 *)&byte_200000C8[22];
}

//----- (08003868) --------------------------------------------------------
_WORD __cdecl mb_some_speed()
{
    return word_200000E0;
}

//----- (08003870) --------------------------------------------------------
int sub_8003870()
{
    return *(__int16 *)&byte_200000C8[40];
}

//----- (08003878) --------------------------------------------------------
int mb_get_speed()
{
    return word_200000E2;
}
// 200000E2: using guessed type __int16 word_200000E2;

//----- (08003880) --------------------------------------------------------
void __cdecl sub_8003880()
{
    int v0; // r5
    __int16 v1; // r0
    char *v2; // r7
    int v3; // r0
    __int16 v4; // r6

    v0 = byte_200000C1[0];
    if ( unk_200000C3 )
    {
        word_200000F0 = 0;
        word_200000F2 = 0;
    }
    else if ( dword_20000100 - 16484 < 0x98561D )
    {
        if ( unk_200000C4 )
        {
            --unk_200000C4;
            v1 = word_200000F2;
        }
        else
        {
            v1 = mb_divide(0x401A41Au, dword_20000100) * byte_200000C8;
        }
        word_200000F0 = v1;
        v2 = &start_of_bss[4 * v0];
        dword_2000011C = dword_2000011C - *((_DWORD *)v2 + 17) + dword_20000100;
        v3 = mb_divide(dword_2000011C, 6u);
        v4 = mb_divide(0x401A41Au, v3) * byte_200000C8;
        word_200000F2 = v4;
        *((_DWORD *)v2 + 17) = dword_20000100;
        v0 = (unsigned __int8)(v0 + 1);
        if ( v0 >= 6 )
        {
            LOBYTE(v0) = 0;
        }
        word_200000DE = (unsigned int)(78000 * word_200000F0) >> 16;
        word_200000DC = divide_0(word_200000DE, 26);
        word_200000E2 = (unsigned int)(78000 * v4) >> 16;
        word_200000E0 = divide_0(word_200000E2, 26);
    }
    byte_200000C1[0] = v0;
}
// 200000C1: using guessed type unsigned __int8 byte_200000C1[122];
// 200000C8: using guessed type char byte_200000C8;
// 200000DC: using guessed type __int16 word_200000DC;
// 200000DE: using guessed type __int16 word_200000DE;
// 200000E0: using guessed type __int16 word_200000E0;
// 200000E2: using guessed type __int16 word_200000E2;
// 200000F0: using guessed type __int16 word_200000F0;
// 200000F2: using guessed type __int16 word_200000F2;
// 20000100: using guessed type unsigned int dword_20000100;
// 2000011C: using guessed type unsigned int dword_2000011C;

//----- (08003928) --------------------------------------------------------
int sub_8003928()
{
    return unk_200000C3;
}

//----- (0800392E) --------------------------------------------------------
void __cdecl sub_800392E()
{
    *(_WORD *)&byte_200000C8[32] = 0;
    *(_WORD *)&byte_200000C8[28] = 0;
    *(_WORD *)&byte_200000C8[34] = 0;
}
// 200000E4: using guessed type char;
// 200000E8: using guessed type char;
// 200000EA: using guessed type char;

//----- (0800393A) --------------------------------------------------------
int get_motor_sector_position()
{
    return motor_sector_position_list[get_motor_hall_bits()];
}
// 8004450: using guessed type unsigned __int8 motor_sector_position_list[8];

//----- (08003946) --------------------------------------------------------
int get_motor_hall_bits()
{
    int counter; // r4
    unsigned int PA15_HallA_value; // r5
    int PA1_HallB_value_0_2_or_4; // r6
    unsigned int PB10_HallC_Value_0_or_1; // r0
    int mask; // r1
    int result_0_to_7; // r0
    unsigned __int8 last_result; // [sp+0h] [bp-18h]

    LOBYTE(counter) = 0;
    last_result = 0;
    // Repeat util 5+1 same results
    do
    {
        while ( 1 )
        {
            PA15_HallA_value = gpio_get_port_value(&GPIO_A) >> 15;
            if ( runtime_config_type_1.HALL_configuration == 1 )
            {
                PA1_HallB_value_0_2_or_4 = 4 * (((unsigned __int8)gpio_get_port_value(&GPIO_A) >> 1) & 1);
                PB10_HallC_Value_0_or_1 = gpio_get_port_value(&GPIO_B) >> 9;
                mask = 2;
            }
            else
            {
                PA1_HallB_value_0_2_or_4 = 2 * (((unsigned __int8)gpio_get_port_value(&GPIO_A) >> 1) & 1);
                PB10_HallC_Value_0_or_1 = gpio_get_port_value(&GPIO_B) >> 8;
                mask = 4;
            }
            result_0_to_7 = ((PA1_HallB_value_0_2_or_4 + (PB10_HallC_Value_0_or_1 & mask)) | PA15_HallA_value) & 7;
            // Repeat until same reading twice
            if ( result_0_to_7 == last_result )
            {
                break;
            }
            last_result = result_0_to_7;
            LOBYTE(counter) = 0;
        }
        counter = (unsigned __int8)(counter + 1);
    }
    while ( counter < 5 );
    return result_0_to_7;
}
// 48000000: using guessed type GPIO_PORT_STRUCT GPIO_A;

//----- (080039E4) --------------------------------------------------------
__int64 __fastcall mb_some_h_bridge(int a1, __int64 a2)
{
    int v3; // r5
    int v4; // r2
    int MODER; // r0
    int v6; // r4
    int v7; // r2
    int v8; // r4
    int v9; // r6
    int v10; // r2
    int v11; // r4
    int v12; // r2
    unsigned int v13; // r0
    int v14; // r2
    unsigned int v15; // r0
    int v16; // r5
    int v17; // r4
    int v18; // r2
    int v19; // r1
    unsigned int v20; // r0

    v3 = another_motor_sector_list[motor_sector_1] ^ another_motor_sector_list[previous_motor_sector_1];
    switch ( v3 )
    {
        case 1:
            if ( (another_motor_sector_list[motor_sector_1] & 1) != 0 )
            {
                GPIO_A.BSRR = 0x8000;
            }
            else
            {
                LOWORD(GPIO_A.BRR) = 0x8000;
            }
            GPIO_A.MODER = (unsigned int)(4 * GPIO_A.MODER) >> 2;
            GPIO_A.MODER |= 0x40000000u;
            GPIO_A.MODER &= 0xFFFFFFF3;
            v4 = GPIO_A.MODER | 8;
            GPIO_A.MODER = v4;
            MODER = GPIO_B.MODER;
            GPIO_B.MODER = MODER & 0xFFCFFFFF;
            goto LABEL_27;
        case 2:
            if ( (another_motor_sector_list[motor_sector_1] & 2) != 0 )
            {
                if ( runtime_config_type_1.HALL_configuration == 1 )
                {
                    GPIO_B.BSRR = 1024;
                    goto LABEL_24;
                }
                GPIO_A.BSRR = 2;
            }
            else
            {
                if ( runtime_config_type_1.HALL_configuration == 1 )
                {
                    LOWORD(GPIO_B.BRR) = 1024;
LABEL_24:
                    GPIO_B.MODER &= 0xFFCFFFFF;
                    GPIO_B.MODER |= 0x100000u;
                    v11 = GPIO_A.MODER & 0xFFFFFFF3;
                    GPIO_A.MODER = v11;
                    v12 = GPIO_A.MODER | 8;
                    GPIO_A.MODER = v12;
                    break;
                }
                LOWORD(GPIO_A.BRR) = 2;
            }
            GPIO_A.MODER &= 0xFFFFFFF3;
            v6 = GPIO_A.MODER | 4;
            GPIO_A.MODER = v6;
            GPIO_B.MODER &= 0xFFCFFFFF;
            v7 = GPIO_B.MODER | 0x200000;
            GPIO_B.MODER = v7;
            break;
        case 4:
            if ( (another_motor_sector_list[motor_sector_1] & 4) != 0 )
            {
                if ( runtime_config_type_1.HALL_configuration != 1 )
                {
                    GPIO_B.BSRR = 1024;
                    goto LABEL_24;
                }
                GPIO_A.BSRR = 2;
            }
            else
            {
                if ( runtime_config_type_1.HALL_configuration != 1 )
                {
                    LOWORD(GPIO_B.BRR) = 1024;
                    goto LABEL_24;
                }
                LOWORD(GPIO_A.BRR) = 2;
            }
            v8 = GPIO_A.MODER & 0xFFFFFFF3;
            GPIO_A.MODER = v8;
            v9 = GPIO_A.MODER | 4;
            GPIO_A.MODER = v9;
            GPIO_B.MODER &= 0xFFCFFFFF;
            v10 = GPIO_B.MODER | 0x200000;
            GPIO_B.MODER = v10;
            break;
        default:
            v15 = 4 * GPIO_A.MODER;
            GPIO_A.MODER = v15 >> 2;
            v16 = (v15 >> 2) | 0x80000000;
            GPIO_A.MODER = v16;
            GPIO_A.MODER &= 0xFFFFFFF3;
            v17 = GPIO_A.MODER | 8;
            GPIO_A.MODER = v17;
            v18 = GPIO_B.MODER & 0xFFCFFFFF;
            GPIO_B.MODER = v18;
LABEL_27:
            v19 = GPIO_B.MODER | 0x200000;
            GPIO_B.MODER = v19;
            goto LABEL_28;
    }
    v13 = 4 * GPIO_A.MODER;
    GPIO_A.MODER = v13 >> 2;
    v14 = (v13 >> 2) | 0x80000000;
    GPIO_A.MODER = v14;
LABEL_28:
    if ( !unk_20000124 || (v20 = (unsigned int)(49152 * unk_20000124) >> 16, v20 >= 0x7D) )
    {
        LOWORD(v20) = 124;
    }
    word_200000F8 = v20;
    return a2;
}
// 8007FB0: using guessed type unsigned __int8 another_motor_sector_list[8];
// 200000F8: using guessed type unsigned __int16 word_200000F8;
// 48000000: using guessed type GPIO_PORT_STRUCT GPIO_A;

//----- (08003B78) --------------------------------------------------------
void __cdecl gpio_a_and_b_stuff()
{
    unsigned int MODER; // r1
    int v1; // r1

    MODER = GPIO_A.MODER;
    MODER *= 4;
    // Clear bit 0 & 1
    GPIO_A.MODER = MODER >> 2;
    // Set bit 31
    GPIO_A.MODER = (MODER >> 2) | 0x80000000;
    // Clear bit 2 & 3 and set bit 31
    GPIO_A.MODER = (MODER >> 2) & 0x7FFFFFF3 | 0x80000000;
    // Clear bit 2 & 3 and set bit 31 & 3
    GPIO_A.MODER = (MODER >> 2) & 0x7FFFFFF3 | 0x80000008;
    v1 = GPIO_B.MODER;
    GPIO_B.MODER = v1 & 0xFFCFFFFF;
    GPIO_B.MODER = v1 & 0xFFCFFFFF | 0x200000;
}
// 48000000: using guessed type GPIO_PORT_STRUCT GPIO_A;

//----- (08003BB4) --------------------------------------------------------
int get_motor_sector_position_0()
{
    int v0; // r4
    int v1; // r5

    gpio_a_and_b_stuff();
    v0 = 20;
    do
    {
        motor_sector_position = motor_sector_position_list[get_motor_hall_bits()];
        v1 = (unsigned __int8)motor_sector_position;
        if ( motor_sector_position )
        {
            break;
        }
        set_error_runtime_gear_mode_runtime_const_3();
        set_error_bit(2);
        byte_200000D2 = 0;
        --v0;
    }
    while ( v0 );
    return v1;
}
// 8004450: using guessed type unsigned __int8 motor_sector_position_list[8];
// 200000D2: using guessed type char byte_200000D2;
// 200000D8: using guessed type char motor_sector_position;

//----- (08003BEC) --------------------------------------------------------
char *sub_8003BEC()
{
    char *result; // r0
    char v1; // r1
    char v2; // r3

    result = start_of_bss;
    v1 = byte_200000D4;
    if ( main_loop_state == 15 )
    {
        byte_200000D5 = byte_200000D4 + byte_200000C8;
        v1 = byte_200000D4 + byte_200000C8;
        if ( (char)(byte_200000D4 + byte_200000C8) >= 3 )
        {
            if ( v1 >= 4 )
            {
                v1 = 3;
            }
            v2 = -1;
        }
        else
        {
            if ( v1 >= 0 )
            {
LABEL_11:
                unk_200000D7 = (unsigned int)((char)(byte_200000D4 + byte_200000C8) + 1) >= 4;
                goto LABEL_12;
            }
            if ( v1 < -1 )
            {
                v1 = -1;
            }
            v2 = 1;
        }
        byte_200000D6 = v2;
        goto LABEL_11;
    }
LABEL_12:
    byte_200000D4 = v1;
    return result;
}
// 200000C8: using guessed type char byte_200000C8;
// 200000D4: using guessed type char byte_200000D4;
// 200000D5: using guessed type char byte_200000D5;
// 200000D6: using guessed type char byte_200000D6;
// 200004B1: using guessed type char mb_global_main_state;

//----- (08003C48) --------------------------------------------------------
int sub_8003C48()
{
    int v0; // r1
    int v1; // r2
    int v2; // r0

    ++unk_200000D9;
    if ( sub_8003200() )
    {
        unk_200000D7 = 0;
        if ( unk_200000D9 >= 8u )
        {
            goto LABEL_5;
        }
    }
    else if ( unk_200000D9 >= 0x19u )
    {
LABEL_5:
        unk_200000D9 = 0;
    }
    LOWORD(v0) = mb_current_amp_mul_100[0];
    if ( mb_current_amp_mul_100[0] < 0 )
    {
        v0 = -mb_current_amp_mul_100[0];
    }
    LOWORD(v1) = dword_2000049C;
    if ( (dword_2000049C & 0x8000u) != 0 )
    {
        v1 = -(__int16)dword_2000049C;
    }
    v2 = unk_2000012C;
    if ( (__int16)v0 >= 2001 || (__int16)v1 >= 7150 )
    {
        goto LABEL_15;
    }
    if ( unk_200000D9 )
    {
        goto LABEL_16;
    }
    if ( unk_200000D7 == 1 )
    {
        v2 = unk_2000012C + 120;
    }
    else
    {
LABEL_15:
        v2 = unk_2000012C - 80;
    }
LABEL_16:
    if ( v2 >= 0 )
    {
        if ( v2 >= 0x8000 )
        {
            v2 = 0x7FFF;
        }
    }
    else
    {
        v2 = 0;
    }
    unk_2000012C = v2;
    return byte_200000D6 * v2;
}
// 200000D6: using guessed type char byte_200000D6;
// 20000322: using guessed type _WORD mb_current_amp_mul_100[3];
// 2000049C: using guessed type int dword_2000049C;

//----- (08003CCA) --------------------------------------------------------
int sub_8003CCA()
{
    return unk_2000012C;
}

//----- (08003CD0) --------------------------------------------------------
int sub_8003CD0()
{
    return *(__int16 *)&byte_200000C8[36];
}

//----- (08003CD8) --------------------------------------------------------
int sub_8003CD8()
{
    int result; // r0

    zeroset(dword_20000104_0x18, 0x18u);
    result = 0;
    dword_2000011C = 0;
    byte_200000C1[0] = 0;
    unk_200000CD = 0;
    unk_200000CE = 0;
    return result;
}
// 200000C1: using guessed type unsigned __int8 byte_200000C1[122];
// 20000104: using guessed type _DWORD dword_20000104_0x18[6];
// 2000011C: using guessed type unsigned int dword_2000011C;

//----- (08003CF2) --------------------------------------------------------
ERROR_BITS_ENUM __fastcall sub_8003CF2(int a1, int a2, int a3, int a4)
{
    int v4; // r0
    int v5; // r1
    ERROR_BITS_ENUM result; // r0
    __int16 v7; // r4
    int v8; // r0
    __int16 v9; // r2
    __int16 v10; // r2

    v4 = (int)&main_loop_state;
    v5 = (unsigned __int8)main_loop_state;
    if ( main_loop_state == 4 )
    {
        return sub_8003E04(v4, v5, a3, a4);
    }
    if ( main_loop_state == 5 )
    {
        v5 = (unsigned __int8)byte_200004B6;
        if ( byte_200004B6 == 4 )
        {
            return sub_8003E04(v4, v5, a3, a4);
        }
    }
    if ( main_loop_state != 3 )
    {
        v5 = (unsigned __int8)main_loop_state;
        if ( main_loop_state != 5 || (v5 = (unsigned __int8)byte_200004B6, byte_200004B6 != 3) )
        {
            v4 = (unsigned __int8)main_loop_state;
            if ( main_loop_state == 15 )
            {
                if ( (unsigned int)byte_200000D5 >= 3 )
                {
                    result = (unsigned __int16)word_200000FE + (unsigned __int16)word_800457C[motor_sector_1] + 5461;
                    word_200000EC = result;
                    word_200000FC = result;
                    return result;
                }
                result = word_200000FC;
LABEL_34:
                word_200000EC = result;
                return result;
            }
            return sub_8003E04(v4, v5, a3, a4);
        }
    }
    result = (unsigned __int16)word_200000FE + (unsigned __int16)word_800457C[motor_sector_1] + 5461;
    if ( !byte_200000C8 || byte_200000CB < 1 )
    {
        goto LABEL_34;
    }
    v7 = word_200000F0;
    if ( byte_200000CB >= (int)unk_200000CC )
    {
        if ( word_200000F0 )
        {
            v8 = (unsigned __int16)word_200000EC + word_200000F0;
            word_200000EC += word_200000F0;
            sub_8003E48(v8, byte_200000C8, byte_200000CB, 0x30);
            word_200000EE += v7;
            return sub_8003EAC();
        }
        byte_200000CB -= 3;
    }
    if ( byte_200000C8 == 1 )
    {
        if ( word_200000F0 < 121 )
        {
            if ( word_200000F0 >= 60 )
            {
                goto LABEL_22;
            }
            v9 = 60;
        }
        else
        {
            v9 = 120;
        }
    }
    else if ( word_200000F0 < -59 )
    {
        v9 = -120;
        if ( word_200000F0 >= -120 )
        {
            goto LABEL_22;
        }
    }
    else
    {
        v9 = -60;
    }
    word_200000F0 = v9;
LABEL_22:
    v10 = word_200000EC + 2 * word_200000F0;
    word_200000EC = v10;
    if ( byte_200000C8 == 1 )
    {
        result = (__int16)result;
        if ( v10 * (__int16)result < 0 )
        {
            return result;
        }
        if ( (__int16)result > v10 )
        {
            result = v10;
        }
        goto LABEL_34;
    }
    if ( byte_200000C8 != -1 )
    {
        goto LABEL_34;
    }
    result = (__int16)result;
    if ( v10 * (__int16)result >= 0 )
    {
        if ( v10 < (__int16)result )
        {
            v10 = result;
        }
        word_200000EC = v10;
    }
    return result;
}
// 8003CF2: could not find valid save-restore pair for r4
// 8003CF2: could not find valid save-restore pair for r5
// 8003CF2: could not find valid save-restore pair for r6
// 800457C: using guessed type _WORD word_800457C[8];
// 200000C8: using guessed type char byte_200000C8;
// 200000CB: using guessed type char byte_200000CB;
// 200000D5: using guessed type char byte_200000D5;
// 200000EC: using guessed type __int16 word_200000EC;
// 200000EE: using guessed type __int16 word_200000EE;
// 200000F0: using guessed type __int16 word_200000F0;
// 200000FC: using guessed type unsigned __int16 word_200000FC;
// 200000FE: using guessed type __int16 word_200000FE;
// 200004B1: using guessed type char mb_global_main_state;
// 200004B6: using guessed type char byte_200004B6;

//----- (08003E04) --------------------------------------------------------
int __fastcall sub_8003E04(int a1, int a2, int a3, int a4)
{
    int v4; // r0
    __int16 v5; // r5
    __int16 v6; // r0
    int v7; // r1

    if ( unk_200000C2 >= 6u )
    {
        v4 = 50;
    }
    else
    {
        v4 = 48;
    }
    v5 = *(_WORD *)&start_of_bss[v4];
    v6 = word_200000EC + v5;
    v7 = unk_200000CA;
    if ( unk_200000CA )
    {
        a3 = word_200000F4;
        v6 += word_200000F4;
        v7 = unk_200000CA - 1;
        --unk_200000CA;
    }
    word_200000EC = v6;
    if ( (error_bits & 2) == 0 )
    {
        sub_8003E48(error_bits << 30, v7, a3, a4);
        word_200000EE += v5;
        sub_8003EAC();
    }
    return a4;
}
// 200000EC: using guessed type __int16 word_200000EC;
// 200000EE: using guessed type __int16 word_200000EE;
// 200000F4: using guessed type unsigned __int16 word_200000F4;

//----- (08003E48) --------------------------------------------------------
int __fastcall sub_8003E48(int a1, int a2, int a3, int a4)
{
    int v4; // r1
    __int16 v5; // r2
    __int16 v6; // r3
    __int16 v7; // r2

    if ( !motor_sector_1 )
    {
        LOWORD(v4) = word_200000FE + 5461;
LABEL_14:
        word_200000EC = v4;
        return a4;
    }
    v5 = word_200000FE + word_800457C[motor_sector_1];
    v4 = (__int16)(v5 + word_200000F6 + 10922);
    v6 = word_200000EC;
    v7 = v5 - word_200000F6;
    if ( v4 * v7 >= 0 )
    {
        if ( v4 < word_200000EC )
        {
            goto LABEL_14;
        }
        goto LABEL_10;
    }
    if ( v4 >= 1 )
    {
        if ( v4 < word_200000EC )
        {
            goto LABEL_14;
        }
        goto LABEL_10;
    }
    if ( word_200000EC >= 0 )
    {
LABEL_10:
        if ( word_200000EC < v7 )
        {
            v6 = v7;
        }
        word_200000EC = v6;
        return a4;
    }
    if ( v4 < word_200000EC )
    {
        goto LABEL_14;
    }
    return a4;
}
// 800457C: using guessed type _WORD word_800457C[8];
// 200000EC: using guessed type __int16 word_200000EC;
// 200000F6: using guessed type __int16 word_200000F6;
// 200000FE: using guessed type __int16 word_200000FE;

//----- (08003EAC) --------------------------------------------------------
ERROR_BITS_ENUM sub_8003EAC()
{
    ERROR_BITS_ENUM result; // r0
    int v1; // r2

    result = error_bits << 9;
    if ( (error_bits & 0x400000) != 0 )
    {
        LOWORD(v1) = word_200000EE;
        if ( word_200000EE < 0 )
        {
            v1 = -word_200000EE;
        }
        result = bit_field_2000|bit_field_1000|UNDER_VOLT|bit_field_80|bit_field_40|bit_field_20|bit_field_4;
        if ( (__int16)v1 >= 14564 )
        {
            result = unk_200000C6;
            if ( !unk_200000C6 )
            {
                result = SELF_CHECK_FAILED;
                unk_200000C6 = 1;
            }
        }
    }
    return result;
}
// 200000EE: using guessed type char;
// 200000EE: using guessed type __int16 word_200000EE;

//----- (08003EE4) --------------------------------------------------------
char *sub_8003EE4()
{
    int v0; // r1
    char *result; // r0
    char v2; // r2
    char v3; // r3
    int v4; // r1

    v0 = motor_sector_position_list[get_motor_hall_bits()];
    result = start_of_bss;
    byte_200000C8[8] = v0;
    *(_WORD *)&byte_200000C8[36] = *(_WORD *)&byte_200000C8[54] + word_800457C[v0] + 0x1555;
    if ( !*(_WORD *)&byte_200000C8[40] )
    {
        if ( (error_bits & 0x2000000) != 0 )
        {
            v2 = -1;
        }
        else
        {
            v2 = 1;
        }
        byte_200000C8[0] = v2;
    }
    v3 = v0 + byte_200000C8[0];
    if ( (unsigned __int8)(v0 + byte_200000C8[0]) >= 7u )
    {
        v3 = 1;
    }
    else if ( !((_BYTE)v0 + byte_200000C8[0]) )
    {
        v3 = 6;
    }
    byte_200000C8[9] = v3;
    v4 = (unsigned __int8)(v0 - byte_200000C8[0]);
    if ( v4 >= 7 )
    {
        LOBYTE(v4) = 1;
    }
    else if ( !v4 )
    {
        LOBYTE(v4) = 6;
    }
    byte_200000C8[7] = v4;
    return result;
}
// 8004450: using guessed type unsigned __int8 byte_8004450[8];
// 800457C: using guessed type _WORD word_800457C[8];
// 200000CF: using guessed type char;
// 200000D0: using guessed type char;
// 200000D1: using guessed type char;
// 200004A0: using guessed type int important_bit_fields;

//----- (08003F58) --------------------------------------------------------
void __cdecl sub_8003F58()
{
    int v0; // r2
    char v1; // r1
    char v2; // r2

    byte_200000C9 = byte_200000C8;
    v0 = motor_sector_1 - previous_motor_sector_1;
    v1 = byte_200000CB;
    if ( v0 == 1 || v0 == -5 )
    {
        v2 = 1;
        if ( main_loop_state != 3 )
        {
            goto LABEL_14;
        }
        if ( (error_bits & 0x2000000) == 0 )
        {
            goto LABEL_10;
        }
        goto LABEL_12;
    }
    if ( v0 != -1 && v0 != 5 )
    {
        v1 = 0;
        v2 = 0;
        unk_200000CC = 6;
        goto LABEL_14;
    }
    v2 = -1;
    if ( main_loop_state == 3 )
    {
        if ( (error_bits & 0x2000000) != 0 )
        {
LABEL_10:
            if ( byte_200000CB != 127 )
            {
                v1 = byte_200000CB + 1;
            }
            goto LABEL_14;
        }
LABEL_12:
        v1 = 0;
    }
LABEL_14:
    byte_200000C8 = v2;
    byte_200000CB = v1;
}
// 200000C8: using guessed type char byte_200000C8;
// 200000C9: using guessed type char byte_200000C9;
// 200000CB: using guessed type char byte_200000CB;
// 200004B1: using guessed type char mb_global_main_state;

//----- (08003FDC) --------------------------------------------------------
int __fastcall unkknown_Reserved_iv(int a1, int a2, int a3, int a4)
{
    int result; // r0

    result = (unsigned __int16)TIM2_SR << 30;
    if ( (TIM2_SR & 2) != 0 )
    {
        return sub_8003FE6(result, a2, a3, a4);
    }
    return result;
}
// 40000010: using guessed type int TIM2_SR;

//----- (08003FE6) --------------------------------------------------------
int __fastcall sub_8003FE6(int a1, __int64 a2)
{
    int v3; // r5
    int motor_sector_position_0; // r6
    int v5; // r0
    int v6; // r1
    char v7; // r0
    int v8; // r0
    char v9; // r0
    __int16 v10; // r0
    _WORD *v11; // r2
    int v12; // r0
    __int16 v13; // r0
    int v15; // [sp+0h] [bp-18h]

    v15 = HIDWORD(a2);
    unk_200000C7 = 1;
    v3 = TIM2_CCR1;
    if ( unk_200000C5 == 1 )
    {
        if ( (unsigned int)TIM2_CCR1 < unk_20000128 )
        {
            TIM2_CNT = TIM2_CCR1;
        }
        else
        {
            LODWORD(a2) = &TIM2_SR;
            TIM2_CNT = TIM2_CCR1 - unk_20000128;
        }
        v3 = unk_20000128;
        unk_200000C5 = 0;
        motor_sector_position_0 = unk_200000D1;
        unk_200000C4 = 2;
    }
    else
    {
        motor_sector_position_0 = motor_sector_position_list[get_motor_hall_bits()];
    }
    if ( main_loop_state == 3 )
    {
        LODWORD(a2) = 0x3013;
        if ( 0x1809 * unk_20000120 - v3 >= 0x3013 )
        {
            v3 = 0x1809 * unk_20000120;
        }
    }
    if ( motor_sector_position_0 == unk_200000D1
      || motor_sector_position_0 == previous_motor_sector_1
      || (motor_sector_position_0 = get_motor_sector_position_0(),
          start_of_bss[0] = motor_sector_position_0,
          motor_sector_position_0) )
    {
        v5 = motor_sector_1;
        if ( motor_sector_position_0 == motor_sector_1 )
        {
            TIM2_CNT += v3;
            goto LABEL_97;
        }
        if ( motor_sector_position_0 == unk_200000D1 )
        {
            v6 = unk_20000120;
            if ( unk_20000120 < 3u )
            {
                v6 = (unsigned __int8)main_loop_state;
                if ( main_loop_state == 3 )
                {
                    TIM2_CNT += v3;
                    goto LABEL_97;
                }
            }
            previous_motor_sector_1 = motor_sector_1;
            motor_sector_1 = motor_sector_position_0;
            mb_some_h_bridge(v5, v6, a2);
LABEL_19:
            if ( word_200000E8 != 0xFFFF )
            {
                ++word_200000E8;
            }
            ++unk_200000E4;
            unk_20000124 = unk_20000120;
            unk_20000120 = 0;
            unk_200000C3 = 0;
            if ( (error_bits & 2) != 0 )
            {
                if ( motor_sector_position_0 )
                {
                    if ( (unsigned __int8)byte_200000D2 >= 7u )
                    {
                        error_bits &= ~2u;
                        some_selected_gear_mode_runtime_const_3();
                    }
                    else
                    {
                        ++byte_200000D2;
                    }
                }
                else
                {
                    byte_200000D2 = 0;
                }
            }
            unk_200000C6 = 0;
            word_200000EE = 0;
            LOWORD(v8) = word_200000F6;
            if ( unk_200000E6 >= 0x19u )
            {
                if ( word_200000F6 < 3640 )
                {
                    v8 = (__int16)(word_200000F6 + 182);
                    if ( v8 >= 3641 )
                    {
                        LOWORD(v8) = 3640;
                    }
                }
            }
            else if ( word_200000F6 >= 1275 )
            {
                v8 = (__int16)(word_200000F6 - 182);
                if ( v8 < 1274 )
                {
                    LOWORD(v8) = 1274;
                }
            }
            word_200000F6 = v8;
            sub_8003F58();
            v9 = motor_sector_1 + byte_200000C8;
            if ( (unsigned __int8)(motor_sector_1 + byte_200000C8) >= 7u )
            {
                v9 = 1;
            }
            else if ( !(motor_sector_1 + byte_200000C8) )
            {
                v9 = 6;
            }
            unk_200000D1 = v9;
            sub_8003BEC();
            if ( motor_sector_1 == 1 )
            {
                if ( byte_200000C8 )
                {
                    if ( byte_200000C8 == 1 )
                    {
                        v11 = word_800457C;
                    }
                    else
                    {
                        v11 = word_800433C;
                    }
                    v10 = word_200000FE + v11[1];
                }
                else
                {
                    v10 = word_200000FE + 5461;
                }
                word_200000F4 = divide_0(v10 - word_200000EC, 12);
                unk_200000CA = 4;
            }
            if ( main_loop_state == 3 )
            {
                if ( sub_8004458() == 1 )
                {
                    main_loop_state = 4;
                    sub_800500C();
                }
                else if ( byte_200000CB < (int)unk_200000CC )
                {
                    if ( !byte_200000C8 )
                    {
                        word_200000EC = word_200000FE + word_800457C[motor_sector_1] + 5461;
                        v12 = mb_PB11_packet_counter;
                        goto LABEL_88;
                    }
                    if ( byte_200000C8 == 1 )
                    {
                        v13 = word_200000FE + word_800457C[motor_sector_1] - 5461;
                    }
                    else
                    {
                        v13 = word_200000FE + word_800433C[motor_sector_1] + 5461;
                    }
                    word_200000EC = v13;
                }
            }
            else if ( main_loop_state == 4 && unk_200000C2 < 0xCu )
            {
                ++unk_200000C2;
            }
            v12 = mb_PB11_packet_counter;
            if ( byte_200000C8 == 1 )
            {
                if ( unk_200000CD < 0xCu )
                {
                    ++unk_200000CD;
                }
LABEL_86:
                if ( mb_PB11_packet_counter < 0xFFFFu )
                {
                    v12 = mb_PB11_packet_counter + 1;
                }
                goto LABEL_88;
            }
            if ( byte_200000C8 == -1 )
            {
                if ( unk_200000CE < 0xCu )
                {
                    ++unk_200000CE;
                }
                goto LABEL_86;
            }
LABEL_88:
            mb_PB11_packet_counter = v12;
            if ( word_200000E8 != 1 )
            {
                dword_20000100 = v3;
                sub_8003880();
            }
            if ( byte_200000C8 * byte_200000C9 < 0 )
            {
                if ( main_loop_state == 4 )
                {
                    word_200000DC = 0;
                    word_200000E0 = 0;
                    word_200000DE = 0;
                    word_200000E2 = 0;
                    word_200000F0 = 0;
                    word_200000F2 = 0;
                    gpio_a_and_b_stuff();
                    unk_200000D3 = 1;
                }
                else if ( main_loop_state == 3 )
                {
                    byte_200000CB = 0;
                }
            }
            if ( motor_sector_position_0 == 1 )
            {
                word_200001D4 = word_200002DA;
                word_200002DA = 0;
            }
            goto LABEL_97;
        }
        if ( motor_sector_position_0 != previous_motor_sector_1 )
        {
            if ( main_loop_state != 3 || unk_20000120 < 0x15u )
            {
                TIM2_CNT += v3;
                goto LABEL_97;
            }
LABEL_41:
            previous_motor_sector_1 = motor_sector_1;
            motor_sector_1 = motor_sector_position_0;
            gpio_a_and_b_stuff();
            goto LABEL_19;
        }
        if ( main_loop_state == 4 )
        {
            if ( unk_20000120 < 8u )
            {
                TIM2_CNT += v3;
                goto LABEL_97;
            }
            goto LABEL_41;
        }
        TIM2_CNT += v3;
        previous_motor_sector_1 = motor_sector_1;
        motor_sector_1 = motor_sector_position_0;
        gpio_a_and_b_stuff();
        sub_8003F58();
        v7 = motor_sector_1 + byte_200000C8;
        if ( (unsigned __int8)(motor_sector_1 + byte_200000C8) >= 7u )
        {
            v7 = 1;
        }
        else if ( !(motor_sector_1 + byte_200000C8) )
        {
            v7 = 6;
        }
        unk_200000D1 = v7;
        sub_8003BEC();
        if ( (error_bits & 2) != 0 )
        {
            if ( motor_sector_position_0 )
            {
                if ( (unsigned __int8)byte_200000D2 >= 7u )
                {
                    error_bits &= ~2u;
                    some_selected_gear_mode_runtime_const_3();
                }
                else
                {
                    ++byte_200000D2;
                }
            }
            else
            {
                byte_200000D2 = 0;
            }
        }
        unk_200000C6 = 0;
        word_200000EE = 0;
    }
LABEL_97:
    unk_200000C7 = 0;
    return v15;
}
// 800407A: variable 'a2' is possibly undefined
// 800433C: using guessed type _WORD word_800433C[8];
// 8004450: using guessed type unsigned __int8 motor_sector_position_list[8];
// 800457C: using guessed type _WORD word_800457C[8];
// 200000C8: using guessed type char byte_200000C8;
// 200000C9: using guessed type char byte_200000C9;
// 200000CB: using guessed type char byte_200000CB;
// 200000D2: using guessed type char byte_200000D2;
// 200000DC: using guessed type __int16 word_200000DC;
// 200000DE: using guessed type __int16 word_200000DE;
// 200000E0: using guessed type __int16 word_200000E0;
// 200000E2: using guessed type __int16 word_200000E2;
// 200000E8: using guessed type unsigned __int16 word_200000E8;
// 200000EC: using guessed type __int16 word_200000EC;
// 200000EE: using guessed type __int16 word_200000EE;
// 200000F0: using guessed type __int16 word_200000F0;
// 200000F2: using guessed type __int16 word_200000F2;
// 200000F6: using guessed type __int16 word_200000F6;
// 200000FE: using guessed type __int16 word_200000FE;
// 20000100: using guessed type unsigned int dword_20000100;
// 200001D4: using guessed type __int16 word_200001D4;
// 20000298: using guessed type _DWORD dword_20000298;
// 200002DA: using guessed type __int16 word_200002DA;
// 200004B1: using guessed type char main_loop_state;
// 40000010: using guessed type int TIM2_SR;
// 40000024: using guessed type int TIM2_CNT;
// 40000034: using guessed type int TIM2_CCR1;

//----- (0800434C) --------------------------------------------------------
void sub_800434C()
{
    unsigned __int8 v0; // r0
    int v1; // r0
    __int16 v2; // r1
    unsigned int v3; // r1

    if ( unk_200000C6 == 1 && !unk_200000C5 && motor_sector_position_list[get_motor_hall_bits()] == unk_200000D1 )
    {
        v0 = byte_200000DA[0] + 1;
        if ( byte_200000DA[0] >= 2u )
        {
            v0 = 0;
            unk_200000C6 = 0;
            if ( !unk_200000C7 )
            {
                unk_20000128 = TIM2_CNT;
                LOWORD(TIM2_EGR) = 2;
                TIM2_CNT = 0;
                unk_200000C5 = 1;
            }
        }
    }
    else
    {
        v0 = 0;
    }
    byte_200000DA[0] = v0;
    if ( word_200000F8 )
    {
        v1 = word_200000F8-- + 0xFFFF;
        if ( !(v1 << 16) )
        {
            gpio_a_and_b_stuff();
        }
    }
    if ( !unk_200000C3 )
    {
        if ( (unsigned __int16)word_200002DA != 0xFFFF )
        {
            ++word_200002DA;
        }
        if ( ++unk_20000120 >= 0x30Cu )
        {
            word_200000DC = 0;
            word_200000E0 = 0;
            word_200000DE = 0;
            word_200000E2 = 0;
            word_200000F0 = 0;
            word_200000F2 = 0;
            gpio_a_and_b_stuff();
            if ( main_loop_state == 4 )
            {
                unk_200000D3 = 1;
            }
        }
        if ( unk_20000120 < 0xF3Cu )
        {
            v2 = 4500;
        }
        else
        {
            v2 = 3285;
        }
        word_200000FA = v2;
        if ( (error_bits & 0x810000) != 0 )
        {
            v3 = 39000;
        }
        else
        {
            v3 = 15600;
        }
        if ( v3 < unk_20000120 )
        {
            dword_20000100 = -1;
            word_200001D4 = -1;
            word_200002DA = -1;
            word_200000DC = 0;
            word_200000E0 = 0;
            word_200000DE = 0;
            word_200000E2 = 0;
            word_200000F0 = 0;
            word_200000F2 = 0;
            byte_200000C8 = 0;
            unk_200000CD = 0;
            unk_200000CE = 0;
            unk_200000C2 = 0;
            word_200000FA = 4500;
            word_200000E8 = 0;
            unk_200000E4 = 0;
            unk_200000C3 = 1;
            sub_8003CD8();
        }
    }
}
// 8004450: using guessed type unsigned __int8 motor_sector_position_list[8];
// 200000C8: using guessed type char byte_200000C8;
// 200000DA: using guessed type unsigned __int8 byte_200000DA[2];
// 200000DE: using guessed type __int16 word_200000DE;
// 200000E0: using guessed type __int16 word_200000E0;
// 200000E2: using guessed type __int16 word_200000E2;
// 200000E8: using guessed type unsigned __int16 word_200000E8;
// 200000F0: using guessed type __int16 word_200000F0;
// 200000F2: using guessed type __int16 word_200000F2;
// 200000F8: using guessed type unsigned __int16 word_200000F8;
// 200000FA: using guessed type __int16 word_200000FA;
// 20000100: using guessed type unsigned int dword_20000100;
// 200001D4: using guessed type __int16 word_200001D4;
// 200002DA: using guessed type __int16 word_200002DA;
// 200004B1: using guessed type char mb_global_main_state;
// 40000014: using guessed type int TIM2_EGR;
// 40000024: using guessed type int TIM2_CNT;

//----- (08004458) --------------------------------------------------------
int sub_8004458()
{
    int result; // r0
    int v1; // r3

    result = 0;
    if ( byte_200000CB >= 7 )
    {
        v1 = 78000 * word_200000F2;
        if ( (error_bits & 0x2000000) != 0 )
        {
            if ( v1 / 0x10000 >= -83 )
            {
                return result;
            }
        }
        else if ( v1 / 0x10000 < 84 )
        {
            return result;
        }
        unk_200000D3 = 0;
        return 1;
    }
    return result;
}
// 200000CB: using guessed type char byte_200000CB;
// 200000F2: using guessed type __int16 word_200000F2;

//----- (080044A0) --------------------------------------------------------
char *sub_80044A0()
{
    char *result; // r0

    result = start_of_bss;
    word_200000EC = word_200000FE + word_800457C[motor_sector_1] + 5461;
    word_200000FC = word_200000EC;
    byte_200000D4 = 0;
    byte_200000D6 = 1;
    unk_200000D7 = 0;
    unk_2000012C = 0;
    return result;
}
// 800457C: using guessed type _WORD word_800457C[8];
// 200000D4: using guessed type char byte_200000D4;
// 200000D6: using guessed type char byte_200000D6;
// 200000EC: using guessed type __int16 word_200000EC;
// 200000FC: using guessed type unsigned __int16 word_200000FC;
// 200000FE: using guessed type __int16 word_200000FE;

//----- (080044C8) --------------------------------------------------------
void __cdecl sub_80044C8()
{
    byte_200000C8[11] = 0;
}
// 200000D3: using guessed type char;

//----- (080044D0) --------------------------------------------------------
void __cdecl sub_80044D0()
{
    byte_200000C8[0] = 0;
    byte_200000C8[3] = -3;
    byte_200000C8[4] = 4;
}
// 200000CB: using guessed type char;
// 200000CC: using guessed type char;

//----- (080044E2) --------------------------------------------------------
int sub_80044E2()
{
    return (unsigned __int8)byte_200000C8[11];
}

//----- (080044E8) --------------------------------------------------------
void __cdecl update_error_bits_bit_1_is_set()
{
    error_bits_bit_1_is_set = (error_bits & MB_PHASE_DISCONNECTED) != 0;
}

//----- (080044FE) --------------------------------------------------------
void __fastcall init_HALL_configuration_and_UVW_settings(int a1)
{
    if ( a1 == 1 )
    {
        // This will 0 both field 10 and 11
        *(_WORD *)&runtime_config_type_1.HALL_configuration = 0;
    }
    recalculate_runtime_config_type_1_U_V_W_setting();
}

//----- (08004510) --------------------------------------------------------
void __cdecl sub_8004510()
{
    *(_WORD *)&byte_200000C8[30] = *(_WORD *)&byte_200000C8[28];
    *(_WORD *)&byte_200000C8[28] = 0;
}
// 200000E4: using guessed type char;
// 200000E6: using guessed type char;

//----- (08004520) --------------------------------------------------------
BOOL sub_8004520()
{
    BOOL result; // r0

    result = 0;
    if ( main_loop_state == 3 )
    {
        return byte_200000C8[3] < (int)(unsigned __int8)byte_200000C8[4];
    }
    return result;
}
// 200004B1: using guessed type char mb_global_main_state;

//----- (0800458C) --------------------------------------------------------
char *mb_init_stuff()
{
    int speed; // r0
    int corrected; // r0
    __int16 v2; // r0
    char *result; // r0

    sub_8004D10();
    sub_8005430();
    speed = mb_get_speed();
    if ( speed < 0 )
    {
        speed = (__int16)-(__int16)speed;
    }
    if ( speed < 10 )
    {
        if ( byte_200002DC[0] == 1 )
        {
            byte_200002DC[0] = 0;
            corrected = mb_adc_ch_8_battery_voltage[0] - (unsigned __int16)runtime_config_type_1.adc_ch8_offset;
            if ( corrected < 0 )
            {
                corrected = (unsigned __int16)runtime_config_type_1.adc_ch8_offset - mb_adc_ch_8_battery_voltage[0];
            }
            if ( corrected >= 3972 )
            {
                set_count_down_timer_7(50);
                stop_or_start_timer((int)&TIM1_CR1, 0);
                // Set overvoltage
                JUMPOUT(0x80046E0);
            }
        }
        goto LABEL_10;
    }
    if ( speed < 83 )
    {
LABEL_10:
        sub_80037D8();
        sub_800392E();
        sub_8003EE4();
        sub_8006230();
        goto LABEL_12;
    }
    sub_8006218();
    sub_800500C();
LABEL_12:
    if ( (error_bits & 0x10000) != 0 )
    {
        sub_800625C();
    }
    else
    {
        sub_80056F8();
        if ( (error_bits & 0x800000) != 0 )
        {
            sub_800628C(error_bits << 8);
        }
    }
    if ( error_bits << 16 )
    {
        v2 = 4500;
    }
    else
    {
        if ( (error_bits & 0x800000) != 0 )
        {
            v2 = 1500;
        }
        else
        {
            v2 = 4500;
        }
        mb_max_amp_2[0] = v2;
    }
    word_20000318 = v2;
    if ( (__int16)mb_some_speed() >= 6 || (result = (char *)sub_80018F4(), result != (char *)&unk_00000001) )
    {
        sub_80018DA();
        set_tim1_ccr1_ccr2_ccr3(1);
        result = &byte_200004B4;
        byte_200004B4 = 1;
        while ( byte_200004B4 == 1 )
        {
            ;
        }
    }
    return result;
}
// 80045DC: control flows out of bounds to 80046E0
// 800463A: conditional instruction was optimized away because r0.4<10000u
// 200001B8: using guessed type _WORD mb_adc_ch_8_battery_voltage[1];
// 200002DC: using guessed type unsigned __int8 byte_200002DC[4];
// 20000318: using guessed type __int16 word_20000318;
// 2000031A: using guessed type __int16 mb_max_amp_2[2];
// 200004B4: using guessed type char byte_200004B4;
// 40012C00: using guessed type int TIM1_CR1;

//----- (08004664) --------------------------------------------------------
void __cdecl set_is_over_volt_error_bits()
{
    int is_over_volt; // r0
    ERROR_BITS_ENUM eb; // r0
    int mask; // r1

    if ( mb_check_overheat() == 1 )
    {
        set_count_down_timer_7(50);
        stop_or_start_timer((int)&TIM1_CR1, 0);
        error_bits |= OVER_HEAT;
        error_bits &= ~(BIT_17|BIT_16);
        main_loop_state = MAIN_STATE_MB_ERROR_14;
        set_tim1_ccr1_ccr2_ccr3(0);
    }
    is_over_volt = mb_is_over_under_volt();
    if ( (error_bits & BIT_19) != 0 )
    {
        eb = error_bits;
        mask = ~(BIT_11|BIT_10);
        goto LABEL_9;
    }
    if ( is_over_volt == 2 )
    {
        error_bits |= UNDER_VOLT;
        eb = error_bits;
        mask = ~BIT_17;
LABEL_9:
        error_bits = mask & eb;
        return;
    }
    if ( is_over_volt == 1 )
    {
        set_count_down_timer_7(50);
        stop_or_start_timer((int)&TIM1_CR1, 0);
        error_bits |= OVER_VOLT_1;
        error_bits &= ~(BIT_17|BIT_16);
        main_loop_state = MAIN_STATE_MB_ERROR_14;
        set_tim1_ccr1_ccr2_ccr3(0);
        __asm { POP     {R4,PC}; Pop registers }
    }
}
// 80046FA: unbalanced stack, ignored a potential tail call
// 200004B1: using guessed type char main_loop_state;
// 40012C00: using guessed type int TIM1_CR1;

//----- (080046FC) --------------------------------------------------------
void __fastcall set_error_bit(int a1)
{
    int v2; // r5

    v2 = 1;
    if ( a1 != 2 && a1 != BIT_3 )
    {
        goto LABEL_8;
    }
    if ( main_loop_state != 2 )
    {
        v2 = 0;
    }
    if ( a1 == 2 )
    {
        sub_8003238();
    }
    if ( v2 )
    {
LABEL_8:
        set_count_down_timer_7(50);
        stop_or_start_timer((int)&TIM1_CR1, 0);
    }
    error_bits |= a1;
    error_bits &= -(BIT_17|BIT_16|BIT_0);
    if ( v2 )
    {
        if ( main_loop_state || a1 != BIT_4 && a1 != BIT_9 )
        {
            main_loop_state = 14;
        }
        set_tim1_ccr1_ccr2_ccr3(0);
    }
}
// 200004B1: using guessed type char main_loop_state;
// 40012C00: using guessed type int TIM1_CR1;

//----- (0800478C) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
bool __cdecl system_is_fine()
{
    bool v0; // zf
    ERROR_BITS_ENUM v1; // r0
    char v2; // r0
    int (__fastcall *v4)(int); // [sp+Ch] [bp-4h]

    if ( is_count_down_timer_7_zero() )
    {
        if ( (error_bits & BIT_1) != 0 )
        {
            some_selected_gear_mode_runtime_const_3();
        }
        if ( (error_bits & BIT_4) != 0 && main_loop_state )
        {
            error_bits &= ~BIT_4;
        }
        if ( (error_bits & BIT_5) != 0 )
        {
            error_bits &= ~BIT_5;
        }
        if ( (error_bits & BIT_8) != 0 && !mb_check_overheat() )
        {
            error_bits &= ~BIT_8;
        }
        if ( (error_bits & BIT_10) != 0 && !mb_is_over_under_volt() )
        {
            error_bits &= ~BIT_10;
        }
        if ( (error_bits & BIT_11) != 0 && !mb_is_over_under_volt() )
        {
            error_bits &= -(BIT_11|BIT_0);
        }
        if ( (error_bits & BIT_12) != 0 && unk_200001C0 >= 0x7728u )
        {
            error_bits &= ~BIT_12;
        }
        if ( (error_bits & BIT_9) != 0 && !is_input_port_bit_set(&GPIO_B, BIT_12) )
        {
            error_bits &= ~BIT_9;
        }
        if ( (error_bits & BIT_2) != 0 )
        {
            error_bits &= ~BIT_2;
        }
        if ( (error_bits & BIT_3) != 0 )
        {
            error_bits &= ~BIT_3;
        }
        if ( (error_bits & BIT_14) != 0 )
        {
            error_bits &= ~BIT_14;
        }
        if ( ((unsigned __int16)error_bits & (unsigned __int16)BIT_15) != 0 )
        {
            v0 = seems_bad() == 0;
            v1 = error_bits;
            if ( v0 )
            {
LABEL_41:
                error_bits = v1 & ~BIT_15;
                goto LABEL_42;
            }
            if ( (error_bits & BIT_19) != 0 )
            {
                if ( !mb_some_speed() )
                {
                    if ( (unsigned __int8)byte_200004B7 < 21u )
                    {
                        v2 = byte_200004B7 + 1;
LABEL_38:
                        byte_200004B7 = v2;
                        goto LABEL_42;
                    }
                    error_bits &= ~BIT_15;
                }
                v2 = 0;
                goto LABEL_38;
            }
            if ( (error_bits & BIT_18) == 0 )
            {
                v1 = error_bits;
                goto LABEL_41;
            }
        }
    }
LABEL_42:
    if ( ((unsigned __int16)error_bits & (unsigned __int16)(BIT_15|BIT_14|BIT_12|BIT_11|BIT_10|BIT_9|BIT_8|BIT_7|BIT_6|BIT_5|BIT_4|BIT_3|BIT_2|BIT_1|BIT_0)) != 0 )
    {
        return 0;
    }
    reset_GPIO_pin(&GPIO_B, 4);
    return v4(1);
}
// 80048C2: positive sp value 10 has been found
// 80048C0: variable 'v4' is possibly undefined
// 200004B1: using guessed type char main_loop_state;
// 200004B7: using guessed type char byte_200004B7;

//----- (080048CC) --------------------------------------------------------
int mb_check_overheat()
{
    char v0; // r0

    sub_8002C98(unk_20000178 << 12 >> 16);
    if ( mb_some_controller_overheat != 1 )
    {
        v0 = 0;
        word_20000148 = 0;
        goto LABEL_5;
    }
    if ( word_20000148 >= 0x2EE0u )
    {
        v0 = 1;
LABEL_5:
        unk_20000141 = v0;
    }
    return unk_20000141;
}
// 20000148: using guessed type unsigned __int16 word_20000148;

//----- (08004904) --------------------------------------------------------
void __fastcall def_8000_max_8800_stuff_mb_batt_volt()
{
    char v0; // r2
    char *v1; // r3
    unsigned int v2; // r1
    unsigned int v3; // r4
    int v4; // r2

    // Sanity check config value
    // No code found to update it besides the value clamping here
    if ( (unsigned int)(unsigned __int16)runtime_config_type_2.def_8000_max_8800 - 0x7800 >= 0x1001 )
    {
        runtime_config_type_2.def_8000_max_8800 = 0x8000;
    }
    // WHICH ADC ARE WE READING HERE!!!!!!!
    word_2000014A = ((unsigned __int16)runtime_config_type_2.def_8000_max_8800 * (unsigned int)battery_voltage_adc_value) >> 16;
    unk_20000184 = unk_20000184 - unk_20000180 + (battery_voltage_adc_value >> 1);
    unk_20000180 = unk_20000184 >> 8;
    unk_20000188 = unk_20000188 - mb_battery_voltage_mul_256 + word_2000014A;
    mb_battery_voltage_mul_256 = unk_20000188 >> 8;
    unk_20000174 = word_2000014A;
    v0 = stru_20000130.field_8;
    v1 = &stru_20000130.field_0 + 2 * (unsigned __int8)stru_20000130.field_8;
    v2 = (unsigned int)(4124 * (unk_20000188 >> 8)) >> 16;
    v3 = unk_2000017C - *((unsigned __int16 *)v1 + 24) + v2;
    unk_2000017C = v3;
    *((_WORD *)v1 + 24) = v2;
    v4 = (unsigned __int8)(v0 + 1);
    if ( v4 >= 8 )
    {
        LOBYTE(v4) = 0;
    }
    stru_20000130.field_8 = v4;
    devived_from_runtime_config_type_2_def_8000_max_8800 = v3 >> 3;
}
// 20000130: using guessed type struc_20000130 stru_20000130;
// 2000014A: using guessed type unsigned __int16 word_2000014A;

//----- (08004978) --------------------------------------------------------
struc_20000130 *sub_8004978()
{
    struc_20000130 *result; // r0

    result = &stru_20000130;
    unk_2000018C = unk_2000018C - unk_20000178 + unk_200001BE;
    unk_20000178 = unk_2000018C >> 8;
    return result;
}
// 20000130: using guessed type struc_20000130 stru_20000130;

//----- (08004998) --------------------------------------------------------
void __cdecl init_some_temp_and_batt_values()
{
    unk_20000178 = (unsigned __int16)(16 * some_calc_factor_2[0]);
    mb_battery_voltage_mul_256 = 0x3EFD;
    unk_2000018C = (unsigned __int16)(16 * some_calc_factor_2[0]) << 8;
    unk_20000188 = 0x3EFD00;
    unk_20000184 = 0x3EFD00;
}
// 80076CC: using guessed type __int16 some_calc_factor_2[126];

//----- (080049D0) --------------------------------------------------------
void __cdecl sub_80049D0()
{
    if ( sub_8002D64() >= 110 )
    {
        if ( (unsigned __int8)stru_20000130.field_9 >= 250u )
        {
            mb_some_controller_overheat = 1;
            stru_20000130.field_B = 1;
            word_20000148 = 12000;
        }
        else
        {
            ++stru_20000130.field_9;
        }
        stru_20000130.field_A = 0;
LABEL_20:
        *(_WORD *)error_list_index = 0;
        return;
    }
    if ( sub_8002D64() < (int)&unk_00000069 )
    {
        if ( sub_8002D64() < 75 )
        {
            if ( (unsigned __int8)stru_20000130.field_A >= 0xFAu )
            {
                mb_some_controller_overheat = 0;
                stru_20000130.field_B = 0;
            }
            else
            {
                ++stru_20000130.field_A;
            }
            stru_20000130.field_9 = 0;
            goto LABEL_20;
        }
        if ( error_list_index[0] >= 0xFAu )
        {
            mb_some_controller_overheat = 0;
            stru_20000130.field_B = 1;
            word_2000014C = 17872 - 337 * (sub_8002D64() - 75);
        }
        else
        {
            ++error_list_index[0];
        }
        stru_20000130.field_9 = 0;
        stru_20000130.field_A = 0;
        error_list_index[1] = 0;
    }
    else
    {
        if ( error_list_index[1] >= 0xFAu )
        {
            mb_some_controller_overheat = 1;
            stru_20000130.field_B = 1;
            word_2000014C = 7744;
        }
        else
        {
            ++error_list_index[1];
        }
        stru_20000130.field_9 = 0;
        stru_20000130.field_A = 0;
        error_list_index[0] = 0;
    }
}
// 20000130: using guessed type struc_20000130 stru_20000130;
// 20000142: using guessed type unsigned __int8 error_list_index[4];
// 20000143: using guessed type unsigned __int8;
// 20000148: using guessed type unsigned __int16 word_20000148;
// 2000014C: using guessed type __int16 word_2000014C;

//----- (08004A8C) --------------------------------------------------------
void __fastcall sub_8004A8C()
{
    char v0; // r2
    char v1; // r3
    __int16 v2; // r3
    char v3; // r1

    v0 = stru_20000130.field_4;
    v1 = stru_20000130.field_5;
    if ( mb_current_amp_mul_100[0] < 4500 )
    {
        if ( mb_current_amp_mul_100[0] < 4300 )
        {
            v0 = 0;
            if ( (unsigned __int8)stru_20000130.field_5 < 0xAu )
            {
                v1 = stru_20000130.field_5 + 1;
            }
            else
            {
                stru_20000130.field_1 = 1;
                stru_20000130.field_0 = 0;
                if ( stru_20000130.field_2 == 1 )
                {
                    stru_20000130.field_3 = 1;
                }
            }
        }
    }
    else
    {
        v1 = 0;
        if ( (unsigned __int8)stru_20000130.field_4 < 0xAu )
        {
            v0 = stru_20000130.field_4 + 1;
        }
        else
        {
            stru_20000130.field_0 = 1;
            if ( stru_20000130.field_1 == 1 )
            {
                stru_20000130.field_2 = 1;
                stru_20000130.field_1 = 0;
            }
        }
    }
    stru_20000130.field_5 = v1;
    stru_20000130.field_4 = v0;
    v2 = word_2000046A;
    if ( stru_20000130.field_0 )
    {
        if ( unk_2000014E >= 24001u )
        {
            v3 = 1;
LABEL_25:
            byte_2000019D = v3;
            goto LABEL_26;
        }
        ++unk_2000014E;
    }
    else
    {
        unk_2000014E = (unsigned __int8)stru_20000130.field_0;
        if ( mb_some_controller_overheat == 1 )
        {
            v3 = 1;
            goto LABEL_25;
        }
    }
    if ( (error_bits & 0x4000000) == 0 )
    {
LABEL_24:
        v3 = 0;
        goto LABEL_25;
    }
    if ( word_2000046A )
    {
        if ( mb_current_amp_mul_100[0] >= 500 )
        {
            v2 = word_2000046A - 1;
        }
        else
        {
            v2 = 100;
        }
        goto LABEL_24;
    }
    if ( (error_bits & 0x10000) == 0 )
    {
        v3 = 1;
        goto LABEL_25;
    }
LABEL_26:
    word_2000046A = v2;
}
// 20000130: using guessed type struc_20000130 stru_20000130;
// 2000014E: using guessed type unsigned __int16 word_2000014E;
// 2000019D: using guessed type char byte_2000019D;
// 20000322: using guessed type _WORD mb_current_amp_mul_100[3];
// 2000046A: using guessed type __int16 word_2000046A;

//----- (08004B4C) --------------------------------------------------------
void __cdecl sub_8004B4C()
{
    if ( unk_200001C0 >= 0x634Bu )
    {
        word_200004A8[2] = 0;
    }
    else if ( ++word_200004A8[2] >= 5u )
    {
        word_200004A8[2] = 0;
        set_count_down_timer_7(50);
        stop_or_start_timer((int)&TIM1_CR1, 0);
        error_bits |= BIT_12;
        error_bits &= ~(BIT_17|BIT_16);
        main_loop_state = 14;
        set_tim1_ccr1_ccr2_ccr3(0);
    }
}
// 200004A8: using guessed type _WORD word_200004A8[3];
// 200004AC: using guessed type _WORD;
// 200004B1: using guessed type char main_loop_state;
// 40012C00: using guessed type int TIM1_CR1;

//----- (08004BAC) --------------------------------------------------------
int mb_is_over_under_volt()
{
    int result; // r0
    unsigned __int16 v1; // r4
    unsigned __int16 v2; // r5

    result = 0;
    v1 = timer_1;
    // mb 49v
    if ( mb_battery_voltage_mul_256 >= 12552u )
    {
        v1 = 0;
    }
    else if ( timer_1 < 10u )
    {
        v1 = timer_1 + 1;
    }
    else
    {
        result = 2;
        word_20000154 = 0;
    }
    timer_1 = v1;
    v2 = word_20000152;
    if ( (unsigned int)(unk_20000174 - 9533) < 10167 )
    {
        v2 = 0;
    }
    else if ( word_20000152 < 2u )
    {
        v2 = word_20000152 + 1;
    }
    else
    {
        result = 1;
        word_20000156 = 0;
    }
    word_20000152 = v2;
    // mb is battery over volt according to blink position
    if ( (error_bits & OVER_VOLT_1) != 0 )
    {
        result = 1;
        if ( (unsigned int)(unk_20000174 - 13505) >= 5560 )
        {
            return result;
        }
        if ( word_20000156 < 21u )
        {
            ++word_20000156;
            return result;
        }
        return 0;
    }
    if ( (error_bits & UNDER_VOLT) != 0 )
    {
        result = 2;
        if ( mb_battery_voltage_mul_256 >= 13505u )
        {
            if ( word_20000154 >= 21u )
            {
                return 0;
            }
            ++word_20000154;
        }
    }
    return result;
}
// 20000150: using guessed type unsigned __int16 unk_20000150;
// 20000152: using guessed type unsigned __int16 unk_20000152;
// 20000154: using guessed type unsigned __int16 unk_20000154;
// 20000156: using guessed type unsigned __int16 unk_20000156;

//----- (08004C38) --------------------------------------------------------
int seems_bad()
{
    int result; // r0
    unsigned __int16 v1; // r3

    result = 0;
    v1 = unk_20000158;
    if ( word_200004A8[0] < 0 && word_2000031E >= 1 && (error_bits & BIT_16) != 0 )
    {
        if ( unk_20000158 < 0xC8u )
        {
            v1 = unk_20000158 + 1;
        }
        else
        {
            result = 1;
            unk_2000015A = 0;
        }
    }
    else if ( unk_20000158 )
    {
        v1 = unk_20000158 - 1;
    }
    unk_20000158 = v1;
    if ( ((unsigned __int16)error_bits & (unsigned __int16)BIT_15) != 0 )
    {
        result = 1;
        if ( (error_bits & BIT_19) == 0 )
        {
            if ( mb_battery_voltage_mul_256 >= 0x4CF4u )
            {
                unk_2000015A = 0;
            }
            else if ( unk_2000015A < 0xC9u )
            {
                ++unk_2000015A;
            }
            else
            {
                return 0;
            }
        }
    }
    return result;
}
// 20000158: using guessed type unsigned __int16 word_20000158;
// 2000015A: using guessed type unsigned __int16 word_2000015A;
// 2000031E: using guessed type __int16 word_2000031E;
// 200004A8: using guessed type _WORD word_200004A8[3];

//----- (08004CB0) --------------------------------------------------------
int sub_8004CB0()
{
    __int16 v0; // r1

    unk_20000190 = mb_battery_voltage_mul_256;
    if ( mb_battery_voltage_mul_256 >= 0x3108u )
    {
        if ( unk_20000190 < 12868u )
        {
            v0 = ((2988 * (unk_20000190 - 0x3107)) >> 8) + 800;
        }
        else
        {
            v0 = 4500;
        }
    }
    else
    {
        v0 = 800;
    }
    word_2000015C = v0;
    return v0;
}
// 2000015C: using guessed type __int16 word_2000015C;

//----- (08004CEA) --------------------------------------------------------
int get_devived_from_runtime_config_type_2_def_8000_max_8800()
{
    return devived_from_runtime_config_type_2_def_8000_max_8800;
}

//----- (08004CF8) --------------------------------------------------------
unsigned int sub_8004CF8()
{
    return (unsigned int)(4124 * unk_20000174) >> 16;
}

//----- (08004D10) --------------------------------------------------------
int sub_8004D10()
{
    int result; // r0

    dword_200003D8 = 0;
    dword_200002FC = 0;
    unk_20000314 = 0;
    result = error_bits << 15;
    if ( (error_bits & 0x10000) == 0 )
    {
        unk_200003E0 = -dword_200002A8;
        unk_200003E4 = dword_200002A8;
        dword_200003E8 = -16384 * dword_200002A8;
        result = dword_200002A8 << 14;
        dword_200003EC = dword_200002A8 << 14;
    }
    return result;
}
// 200002A8: using guessed type int dword_200002A8;
// 200002FC: using guessed type int dword_200002FC;
// 200003D8: using guessed type int dword_200003D8;
// 200003E8: using guessed type int dword_200003E8;
// 200003EC: using guessed type int dword_200003EC;

//----- (08004D78) --------------------------------------------------------
void __cdecl blink_error_codes_on_PB2_led()
{
    unsigned __int8 index; // r4
    char error_list[16]; // [sp+0h] [bp-28h]

    *(_DWORD *)&index = 0;
    // Battery over-voltage
    if ( (error_bits & OVER_VOLT_1) != 0 )
    {
        error_list[0] = 1;
        *(_DWORD *)&index = 1;
    }
    // Battery under-voltage
    if ( (error_bits & UNDER_VOLT) != 0 || (error_bits & BIT_12) != 0 )
    {
        error_list[*(_DWORD *)&index] = 2;
        ++index;
    }
    // Motor over-current
    if ( (error_bits & BIT_9) != 0 )
    {
        error_list[index++] = 3;
    }
    // Motor stall
    if ( (error_bits & BIT_3) != 0 )
    {
        error_list[index++] = 4;
    }
    // Hall error
    if ( error_bits_bit_1_is_set == 1 )
    {
        error_list[index++] = 5;
    }
    // MOSFET error
    if ( (error_bits & BIT_4) != 0 )
    {
        error_list[index++] = 6;
    }
    // Phase disconnect
    if ( (error_bits & BIT_5) != 0 )
    {
        error_list[index++] = 7;
    }
    // Unknown
    if ( (error_bits & BIT_6) != 0 )
    {
        error_list[index++] = BIT_3;
    }
    // Break status PA11
    if ( !is_input_port_bit_set(&GPIO_A, UNDER_VOLT) )
    {
        error_list[index++] = 9;
    }
    // Self-check error
    if ( (error_bits & SELF_CHECK_FAILED) != 0 )
    {
        error_list[index++] = 10;
    }
    // Over-hear error
    if ( (error_bits & BIT_8) != 0 || mb_some_controller_overheat == 1 )
    {
        error_list[index++] = 11;
    }
    // Unknown
    if ( (error_bits & BIT_14) != 0 )
    {
        error_list[index++] = 12;
    }
    // Unknown
    if ( ((unsigned __int16)error_bits & (unsigned __int16)BIT_15) != 0 )
    {
        error_list[index++] = 13;
    }
    // Throttle error
    if ( byte_20001F83[0] == 1 )
    {
        error_list[index++] = 14;
    }
    // Antitheft status
    if ( (error_bits & BIT_19) != 0 )
    {
        error_list[index++] = 15;
    }

    if ( (unsigned __int8)++stru_20000130.led_loop_wait_count >= 60u )
    {
        stru_20000130.led_loop_wait_count = 0;
        if ( !index )
        {
            // no errors
            reset_GPIO_pin(&GPIO_B, BIT_2);
            stru_20000130.LED_OFF = 1;
            stru_20000130.blink_count = 0;
            stru_20000130.max_blink_count = 0;
LABEL_44:
            error_list_index[2] = 0;
            return;
        }
        if ( (unsigned __int8)stru_20000130.blink_count >= (unsigned int)(unsigned __int8)stru_20000130.max_blink_count )
        {
            if ( (unsigned __int8)stru_20000130.blink_count >= (unsigned __int8)stru_20000130.max_blink_count + 4 )
            {
                stru_20000130.LED_OFF = 1;
                stru_20000130.blink_count = 0;
                stru_20000130.max_blink_count = error_list[error_list_index[2]++];
                if ( error_list_index[2] < (unsigned int)index )
                {
                    return;
                }
                goto LABEL_44;
            }
            // PB2 LED
            reset_GPIO_pin(&GPIO_B, BIT_2);
        }
        else
        {
            if ( !stru_20000130.LED_OFF )
            {
                // PB2
                reset_GPIO_pin(&GPIO_B, BIT_2);
                stru_20000130.LED_OFF = 1;
                return;
            }
            set_GPIO_pin(&GPIO_B, BIT_2);
            stru_20000130.LED_OFF = 0;
        }
        ++stru_20000130.blink_count;
    }
}
/* Orphan comments:
Only do stuff every 60 calls

*/
// 20000130: using guessed type struc_20000130 stru_20000130;
// 20000142: using guessed type unsigned __int8 error_list_index[4];
// 20000144: using guessed type unsigned __int8;
// 20001F83: using guessed type unsigned __int8 byte_20001F83[2];
// 48000000: using guessed type GPIO_PORT_STRUCT GPIO_A;

//----- (08004F18) --------------------------------------------------------
void __fastcall handle_button_press(int is_pressed, button_struct *button_data)
{
    if ( is_pressed == 1 )
    {
        button_data->debounch_counter = 0;
        if ( button_data->is_pressed_counter < 0xAu )
        {
            ++button_data->is_pressed_counter;
        }
        else
        {
            button_data->valid_push = 1;
            if ( button_data->is_up == 1 )
            {
                button_data->is_down = 1;
                button_data->is_up = 0;
            }
        }
    }
    else
    {
        button_data->is_pressed_counter = 0;
        if ( button_data->debounch_counter < 0xAu )
        {
            ++button_data->debounch_counter;
        }
        else
        {
            button_data->is_up = 1;
            button_data->valid_push = 0;
            if ( button_data->is_down == 1 )
            {
                button_data->valid_release = 1;
            }
        }
    }
}

//----- (08004F5A) --------------------------------------------------------
void __cdecl some_mode_or_gear_handling_1()
{
    int speed; // r0
    int v1; // r0
    unsigned __int16 v2; // r1

    // PA12 gear L
    is_mode_button_pressed_1 = -!is_input_port_bit_set(&GPIO_A, 0x1000) < 0;
    handle_button_press(is_mode_button_pressed_1, &PA12_GEAR_L_BUTTON_1);
    if ( PA12_GEAR_L_BUTTON_1.valid_push == 1 )
    {
        unk_20000429 = 1;
    }
    speed = mb_get_speed();
    if ( speed < 0 )
    {
        speed = -speed;
    }
    if ( PA12_GEAR_L_BUTTON_1.valid_push == 1 )
    {
        PA12_GEAR_L_BUTTON_1.valid_push = 0;
        if ( (__int16)speed < 1 )
        {
            v1 = mode_button_select_counter;
            v2 = ++mode_button_select_counter;
            if ( v1 < 50 )
            {
                local_mb_mode_or_gear[0] = 1;
            }
            mode_button_select_counter = v2 + 1;
            if ( v2 >= 401u )
            {
                local_mb_mode_or_gear[0] = 2;
            }
        }
    }
    if ( PA12_GEAR_L_BUTTON_1.valid_release == 1 )
    {
        mode_button_select_counter = 0;
        PA12_GEAR_L_BUTTON_1.valid_release = 0;
    }
    if ( local_mb_mode_or_gear[0] == 1 && (unsigned int)(mb_throttle_value - 0x1746) < 0x2AAB )
    {
        mb_p_or_gear = 1;
    }
    if ( local_mb_mode_or_gear[0] == 2 && (unsigned int)(mb_throttle_value - 0x1746) < 0x2AAB )
    {
        mb_p_or_gear = 0;
    }
}
// 20000240: using guessed type int mb_throttle_value;
// 20000274: using guessed type char mb_p_or_gear;
// 2000042C: using guessed type unsigned __int16 mode_button_select_counter;
// 48000000: using guessed type GPIO_PORT_STRUCT GPIO_A;

//----- (0800500C) --------------------------------------------------------
int sub_800500C()
{
    int result; // r0
    int speed; // r0
    int v2; // r4
    __int16 v3; // r0
    __int16 v4; // r1

    if ( main_loop_state == 4 || main_loop_state == 2 || (result = sub_8004520()) == 0 )
    {
        result = error_bits;
        if ( (error_bits & 0xC0800) == 0 )
        {
            speed = mb_get_speed();
            v2 = speed;
            if ( speed < 0 )
            {
                v2 = (__int16)-(__int16)speed;
            }
            if ( v2 < 1213 )
            {
                v3 = 800;
                v4 = 1100;
                if ( v2 >= 1 )
                {
                    v4 = ((147 * v2) >> 7) + 1100;
                    v3 = ((179 * v2) >> 7) + 800;
                }
            }
            else
            {
                v3 = 2500;
                v4 = 2500;
            }
            sub_80062AC(v3, v4);
            return sub_80062A4(80, 40);
        }
    }
    return result;
}
// 200004B1: using guessed type char main_loop_state;

//----- (08005078) --------------------------------------------------------
int __fastcall PB11_serial_get_next_bit()
{
    unsigned __int8 raw; // r1
    char data; // r1
    char displacement; // r3

    if ( package_bit_index >= 0x60u )
    {
        return 0;
    }
    if ( PB11_ct_3 >= 2u )
    {
        --PB11_ct_3;
        return 0;
    }
    if ( !PB11_ct_3 )
    {
        if ( !PB11_ct_4 )
        {
            ++package_bit_index;
            PB11_ct_4 = 3;
        }
        switch ( package_bit_index >> 3 )
        {
            case 0:
                raw = 0x25;
                break;
            case 1:
                raw = PB11_ct_1;
                break;
            case 2:
                data = 16 * PB11_ct_2;
                displacement = unk_20000284;
                goto LABEL_21;
            case 3:
                data = PB11_feature_bits;
                goto LABEL_20;
            case 4:
                data = PB11_mb_gear_or_park_bits;
                goto LABEL_20;
            case 5:
                data = unk_20000290;
                goto LABEL_20;
            case 6:
                raw = bit_bang_package[0];
                break;
            case 7:
                data = bit_bang_package[1];
                goto LABEL_20;
            case 8:
                data = bit_bang_package[2];
                goto LABEL_20;
            case 9:
                data = bit_bang_package[3];
                goto LABEL_20;
            case 10:
                data = bit_bang_package[4];
LABEL_20:
                displacement = sum_key;
LABEL_21:
                raw = data + displacement;
                break;
            case 11:
                raw = checksum;
                break;
            default:
                break;
        }
        if ( ((raw >> (7 - (package_bit_index & 7))) & 1) != 0 )
        {
            if ( PB11_ct_4 < 3u )
            {
                goto LABEL_25;
            }
        }
        else if ( PB11_ct_4 < 2u )
        {
LABEL_25:
            if ( PB11_ct_4 )
            {
                --PB11_ct_4;
            }
            return 1;
        }
        --PB11_ct_4;
        return 0;
    }
    --PB11_ct_3;
    return 1;
}
// 80050F8: variable 'v0' is possibly undefined
// 2000028C: using guessed type char PB11_mb_gear_or_park_bits;
// 80050F8: variable 'raw' is possibly undefined

//----- (0800514C) --------------------------------------------------------
void __fastcall PB11_build_serial_package()
{
    char v0; // r2
    char v1; // r1
    int v2; // r0
    char v3; // r0
    char v4; // r1
    char v5; // r1
    char v6; // r3
    char v7; // r2
    char v8; // r0
    char mb_amp_or_speed; // r1

    if ( !++PB11_ct_1 )
    {
        ++PB11_ct_2;
    }
    if ( (error_bits & (BIT_18|BIT_16)) != 0 )
    {
        v0 = PB11_mb_gear_or_park_bits | BIT_5;
    }
    else
    {
        v0 = PB11_mb_gear_or_park_bits & ~BIT_5;
    }
    PB11_mb_gear_or_park_bits = v0;
    sum_key = ((((((((PB11_ct_1 - 22) ^ 0xDB) - 0x41) ^ 0x5A) + (PB11_ct_2 & 0xF)) ^ 0x4B) - 0x25) ^ 0xBD) & 0x7F;
    if ( mb_p_or_gear == 1 )
    {
        v1 = unk_20000284 & ~BIT_1;
    }
    else
    {
        v1 = unk_20000284 | BIT_1;
    }
    unk_20000284 = v1;
    if ( (word_200001FE & 0x8000u) == 0 )
    {
        v2 = sub_8003860();
        if ( v2 < 0 )
        {
            v2 = -v2;
        }
        tmp_unk_20000294 = v2 + 40;
        if ( (__int16)v2 + 40 >= (__int16)word_200001FE )
        {
            v3 = unk_20000284 & ~BIT_2;
        }
        else
        {
            v3 = unk_20000284 | BIT_2;
        }
        unk_20000284 = v3;
    }
    if ( (error_bits & 0x800) != 0 )
    {
        v4 = PB11_feature_bits | 8;
    }
    else
    {
        v4 = PB11_feature_bits & 0xF7;
    }
    PB11_feature_bits = v4;
    if ( (error_bits & (BREAK_L|bit_field_10)) != 0 )
    {
        v5 = v4 | BIT_4;
    }
    else
    {
        v5 = v4 & ~BIT_4;
    }
    PB11_feature_bits = v5;
    if ( (error_bits & BIT_5) != 0 || error_bits_bit_1_is_set == 1 )
    {
        v6 = PB11_feature_bits | BIT_6;
    }
    else
    {
        v6 = PB11_feature_bits & ~BIT_6;
    }
    PB11_feature_bits = v6;
    if ( current_gear_mode_2 == VERY_HIGH_1 )
    {
        PB11_mb_gear_or_park_bits &= ~(BIT_1|BIT_0);
    }
    if ( current_gear_mode_2 == LOW )
    {
        PB11_mb_gear_or_park_bits = PB11_mb_gear_or_park_bits & ~(BIT_1|BIT_0) | BIT_0;
    }
    if ( current_gear_mode_2 == HIGH )
    {
        PB11_mb_gear_or_park_bits = PB11_mb_gear_or_park_bits & ~(BIT_1|BIT_0) | BIT_1;
    }
    if ( (error_bits & BIT_16) != 0 || byte_20001F83[1] == 1 )
    {
        v7 = PB11_mb_gear_or_park_bits | BIT_3;
    }
    else
    {
        v7 = PB11_mb_gear_or_park_bits & ~BIT_3;
    }
    PB11_mb_gear_or_park_bits = v7;
    if ( (error_bits & (BIT_18|BIT_16)) != 0 )
    {
        v8 = v7 | BIT_5;
    }
    else
    {
        v8 = v7 & ~BIT_5;
    }
    PB11_mb_gear_or_park_bits = v8;
    if ( mb_current_amp_mul_100 >= 0 )
    {
        mb_amp_or_speed = divide_0((unsigned __int16)mb_current_amp_mul_100, 100);
    }
    else
    {
        mb_amp_or_speed = divide_0((unsigned __int16)-mb_current_amp_mul_100, 100) | 0x80;
    }
    bit_bang_package[0] = mb_amp_or_speed;
    bit_bang_package[1] = BYTE1(mb_PB11_packet_counter);
    bit_bang_package[2] = mb_PB11_packet_counter;
    mb_PB11_packet_counter = 0;
    bit_bang_package[3] = 0;
    bit_bang_package[4] = 0;
    checksum = (bit_bang_package[2] + sum_key) ^ (bit_bang_package[1] + sum_key) ^ mb_amp_or_speed ^ (unk_20000290 + sum_key) ^ (PB11_mb_gear_or_park_bits + sum_key) ^ (PB11_feature_bits + sum_key) ^ (16 * PB11_ct_2 + unk_20000284) ^ PB11_ct_1 ^ 0x25;
    PB11_ct_3 = 50;
    package_bit_index = 0;
    PB11_ct_4 = 3;
}
// 200001FE: using guessed type unsigned __int16 word_200001FE;
// 20000274: using guessed type char mb_p_or_gear;
// 2000028C: using guessed type char PB11_mb_gear_or_park_bits;
// 20000294: using guessed type __int16 tmp_unk_20000294;
// 20000298: using guessed type _DWORD mb_PB11_packet_counter;
// 20000322: using guessed type __int16 mb_current_amp_mul_100;
// 20001F83: using guessed type unsigned __int8 byte_20001F83[2];

//----- (0800531C) --------------------------------------------------------
void __cdecl init_selected_gear_mode()
{
    memzero(&dst, 0x80u);
    current_gear_mode_1 = LOW;
    current_gear_mode_2 = LOW;
    current_gear_mode_3 = LOW;
}

//----- (0800537C) --------------------------------------------------------
int __fastcall xtea_divide_0(signed int a1, signed int a2)
{
    int v2; // r0
    int (__fastcall *v3)(int); // r12
    unsigned int v5; // r0
    int v6; // r0
    int v7; // r1
    int (__fastcall *v8)(int, int); // r12
    int v9; // r0
    int v10; // r1
    int (__fastcall *v11)(int, int); // r12

    if ( (a1 | a2) >= 0 )
    {
        return mb_divide(a1, a2);
    }
    if ( a1 < 0 )
    {
        v5 = -a1;
        if ( a2 < 0 )
        {
            v9 = mb_divide(v5, -a2);
            return v11(v9, -v10);
        }
        else if ( a2 )
        {
            v6 = mb_divide(v5, a2);
            return v8(-v6, -v7);
        }
        else
        {
            return nullsub_2_0();
        }
    }
    else
    {
        v2 = mb_divide(a1, -a2);
        return v3(-v2);
    }
}
// 800535E: variable 'v3' is possibly undefined
// 8005370: variable 'v8' is possibly undefined
// 800536E: variable 'v7' is possibly undefined
// 800537A: variable 'v11' is possibly undefined
// 8005378: variable 'v10' is possibly undefined

//----- (08005382) --------------------------------------------------------
int __fastcall mb_divide(unsigned int a1, unsigned int a2)
{
    unsigned int v2; // r2
    unsigned int high_a1; // r3
    char v5; // cf
    unsigned int v6; // r2
    bool v7; // cf
    unsigned int v8; // r2
    bool v9; // cf
    unsigned int v10; // r2
    bool v11; // cf
    bool v12; // cf
    unsigned int v13; // r2
    bool v14; // cf
    unsigned int v15; // r2
    bool v16; // cf
    unsigned int v17; // r2
    bool v18; // cf
    unsigned int v19; // off

    v2 = 0;
    high_a1 = a1 >> 8;
    if ( a1 >> 8 >= a2 )
    {
        a2 <<= 8;
        if ( !a2 )
        {
            return nullsub_2_0();
        }
        v2 = 0xFF000000;
        if ( high_a1 >= a2 )
        {
            v2 = 0xFFFF0000;
            a2 <<= 8;
            if ( high_a1 >= a2 )
            {
                v2 = 0xFFFFFF00;
                a2 <<= 8;
            }
        }
        if ( a1 >> 4 >= a2 )
        {
            goto LABEL_13;
        }
    }
    else
    {
        if ( a1 >> 4 >= a2 )
        {
            goto LABEL_13;
        }
        if ( a1 >> 1 < a2 )
        {
            return a1 >= a2;
        }
    }
    while ( 1 )
    {
        v12 = a1 >> 3 >= a2;
        if ( a1 >> 3 >= a2 )
        {
            v12 = a1 >= 8 * a2;
            a1 -= 8 * a2;
        }
        v13 = v2 + v12 + v2;
        v14 = a1 >> 2 >= a2;
        if ( a1 >> 2 >= a2 )
        {
            v14 = a1 >= 4 * a2;
            a1 -= 4 * a2;
        }
        v15 = v13 + v14 + v13;
        v16 = a1 >> 1 >= a2;
        if ( a1 >> 1 >= a2 )
        {
            v16 = a1 >= 2 * a2;
            a1 -= 2 * a2;
        }
        v17 = v15 + v16 + v15;
        v18 = a1 >= a2;
        if ( a1 >= a2 )
        {
            v18 = 1;
            a1 -= a2;
        }
        v19 = v18 + v17;
        v5 = __CFADD__(v18, v17) | __CFADD__(v17, v19);
        v2 = v17 + v19;
        if ( !v5 )
        {
            break;
        }
        a2 >>= 8;
LABEL_13:
        v5 = a1 >> 7 >= a2;
        if ( a1 >> 7 >= a2 )
        {
            v5 = a1 >= a2 << 7;
            a1 -= a2 << 7;
        }
        v6 = v2 + v5 + v2;
        v7 = a1 >> 6 >= a2;
        if ( a1 >> 6 >= a2 )
        {
            v7 = a1 >= a2 << 6;
            a1 -= a2 << 6;
        }
        v8 = v6 + v7 + v6;
        v9 = a1 >> 5 >= a2;
        if ( a1 >> 5 >= a2 )
        {
            v9 = a1 >= 32 * a2;
            a1 -= 32 * a2;
        }
        v10 = v8 + v9 + v8;
        v11 = a1 >> 4 >= a2;
        if ( a1 >> 4 >= a2 )
        {
            v11 = a1 >= 16 * a2;
            a1 -= 16 * a2;
        }
        v2 = v10 + v11 + v10;
    }
    return v2;
}

//----- (08005428) --------------------------------------------------------
void nullsub_2_0()
{
    nullsub_1();
}

//----- (08005430) --------------------------------------------------------
void __cdecl sub_8005430()
{
    int v0; // r0

    dword_2000049C = 0;
    dword_20000494 = 0;
    dword_20000498 = 0;
    dword_20000490 = 0;
    word_200004A4[0] = 0;
    word_200004A4[1] = 0;
    word_200002E2 = 0;
    if ( (error_bits & 0x10000) != 0 )
    {
        word_2000031E = 0;
        word_200004A8[0] = 0;
    }
    v0 = dword_200002A8;
    if ( (unsigned int)dword_200002A8 < 29490 )
    {
        v0 = 29490;
    }
    dword_20000324 = (921 * v0) >> 10;
}
// 200002A8: using guessed type int dword_200002A8;
// 200002E2: using guessed type __int16 word_200002E2;
// 2000031E: using guessed type __int16 word_2000031E;
// 20000324: using guessed type int dword_20000324;
// 20000490: using guessed type int dword_20000490;
// 20000494: using guessed type int dword_20000494;
// 20000498: using guessed type int dword_20000498;
// 2000049C: using guessed type int dword_2000049C;
// 200004A4: using guessed type __int16 word_200004A4[2];
// 200004A6: using guessed type __int16;
// 200004A8: using guessed type _WORD word_200004A8[3];

//----- (08005478) --------------------------------------------------------
void __fastcall sub_8005478(int a1, int a2, int a3, signed int a4)
{
    int v4; // r0
    int v5; // r0
    char v6; // r0
    int list[2]; // [sp+8h] [bp-18h] BYREF

    if ( byte_2000019E )
    {
        dword_20000494 = sub_8001DAC();
        dword_20000498 = sub_80062CC(dword_20000494);
    }
    else
    {
        dword_20000498 = dword_20000490;
    }
    dword_20000490 = dword_20000498;
    v4 = sub_8003CD0();
    dword_2000049C = sub_800638C(dword_20000498, v4, HIWORD(dword_20000498));
    if ( main_loop_state == 15 )
    {
        dword_2000046C = sub_8003C48();
LABEL_7:
        v5 = 0;
        goto LABEL_9;
    }
    dword_2000046C = sub_8006150(word_2000031E, (__int16)dword_2000049C, &word_200003DC, 0);
    if ( sub_8004520() )
    {
        goto LABEL_7;
    }
    v5 = sub_8006150(word_200002E2, SHIWORD(dword_2000049C), &word_200003C4, 0);
LABEL_9:
    dword_20000470 = v5;
    sub_8006462();
    calc_some_factors(list, dword_2000046C, dword_20000470);
    hmm_dword_20000474[0] = list[0];
    hmm_dword_20000474[1] = list[1];
    sub_80019E4(list[0], list[1]);
    if ( mb_current_amp_mul_100[0] >= 5626 )
    {
        word_200003DC = 512;
        unk_200003DE = 256;
        v6 = 1;
LABEL_14:
        unk_200002E4 = v6;
        return;
    }
    if ( mb_current_amp_mul_100[0] < 4500 && unk_200002E4 )
    {
        word_200003DC = 80;
        unk_200003DE = 40;
        v6 = 0;
        goto LABEL_14;
    }
}
// 2000019E: using guessed type char byte_2000019E;
// 200002E2: using guessed type __int16 word_200002E2;
// 2000031E: using guessed type __int16 word_2000031E;
// 20000322: using guessed type _WORD mb_current_amp_mul_100[3];
// 200003C4: using guessed type __int16 word_200003C4;
// 200003DC: using guessed type __int16 word_200003DC;
// 2000046C: using guessed type int dword_2000046C;
// 20000470: using guessed type int dword_20000470;
// 20000474: using guessed type int hmm_dword_20000474[2];
// 20000490: using guessed type int dword_20000490;
// 20000494: using guessed type int dword_20000494;
// 20000498: using guessed type int dword_20000498;
// 2000049C: using guessed type int dword_2000049C;
// 200004B1: using guessed type char main_loop_state;

//----- (08005582) --------------------------------------------------------
void __cdecl sub_8005582()
{
    int v0; // r5
    int speed; // r0

    v0 = word_200004A8[1];
    word_2000045C = word_200004A8[1];
    word_2000045E = word_200004A8[1];
    word_20000458 = word_200004A8[1];
    speed = mb_get_speed();
    word_200004A8[0] = sub_8006150(v0, speed, &word_200003F4, 3);
    unk_20000456 = 0;
    word_20000454 = word_200004A8[0];
    word_200002E0 = word_200004A8[0];
    word_200002E2 = 0;
    unk_2000045A = v0;
}
// 200002E0: using guessed type __int16 word_200002E0;
// 200002E2: using guessed type __int16 word_200002E2;
// 200003F4: using guessed type __int16 word_200003F4;
// 20000454: using guessed type __int16 word_20000454;
// 20000458: using guessed type __int16 word_20000458;
// 2000045C: using guessed type __int16 word_2000045C;
// 2000045E: using guessed type __int16 word_2000045E;
// 200004A8: using guessed type _WORD word_200004A8[3];
// 200004AA: using guessed type _WORD;

//----- (080055D0) --------------------------------------------------------
unsigned __int8 *sub_80055D0()
{
    int v0; // r3
    bool v1; // cc
    unsigned __int8 *result; // r0

    if ( word_200004A4[1] )
    {
        word_200004A4[1] = 0;
    }
    LOWORD(v0) = word_200004A4[0];
    if ( word_200004A4[0] >= word_200004A4[1] )
    {
        if ( word_200004A4[1] >= word_200004A4[0] )
        {
            goto LABEL_10;
        }
        v0 = (__int16)(word_200004A4[0] - 8);
        v1 = v0 < word_200004A4[1];
    }
    else
    {
        v0 = (__int16)(word_200004A4[0] + 8);
        v1 = word_200004A4[1] < v0;
    }
    if ( v1 )
    {
        LOWORD(v0) = word_200004A4[1];
    }
LABEL_10:
    word_200004A4[0] = v0;
    result = (unsigned __int8 *)&word_200002E0;
    word_200002E2 = v0;
    return result;
}
// 200002E0: using guessed type __int16 word_200002E0;
// 200002E2: using guessed type __int16 word_200002E2;
// 200004A4: using guessed type __int16 word_200004A4[2];
// 200004A6: using guessed type __int16;

//----- (08005616) --------------------------------------------------------
void __cdecl mb_init_max_amp()
{
    word_200002E8 = 500;
    unk_200002EA = 256;
    unk_200002EC = 0xFFFFBA30;
    unk_200002F0 = 0;
    unk_200002F4 = 0xFDD18000;
    unk_200002F8 = 0;
    dword_200002FC = 0;
    word_20000318 = 4500;
    mb_max_amp_2[0] = 4500;
    mb_max_amp_2[1] = 0;
}
// 200002E8: using guessed type __int16 word_200002E8;
// 20000318: using guessed type __int16 word_20000318;
// 2000031A: using guessed type __int16 mb_max_amp_2[2];
// 2000031C: using guessed type __int16;

//----- (0800564C) --------------------------------------------------------
void __cdecl sub_800564C()
{
    __int16 v0; // r1

    word_20000300 = 6000;
    unk_20000302 = 600;
    unk_20000304 = 0;
    unk_20000308 = 3574;
    unk_2000030C = 0;
    unk_20000310 = 0x6FB000;
    unk_20000314 = 0;
    if ( (error_bits & 0x80000) != 0 )
    {
        v0 = 1240;
    }
    else
    {
        v0 = 1140;
    }
    word_20000320 = v0;
}
// 20000300: using guessed type __int16 word_20000300;
// 20000320: using guessed type __int16 word_20000320;

//----- (08005684) --------------------------------------------------------
unsigned __int8 *sub_8005684()
{
    unsigned __int8 *result; // r0

    result = &byte_200002D0[16];
    *(_DWORD *)&byte_200002D0[68] = 0;
    return result;
}
// 200002D0: using guessed type unsigned __int8 byte_200002D0[74];
// 20000314: using guessed type unsigned __int8;

//----- (080056A8) --------------------------------------------------------
void __fastcall sub_80056A8(int a1)
{
    int v2; // r0
    int v3; // r1

    sub_800564C();
    word_200004A8[1] = 0;
    mb_max_amp_2[1] = 0;
    word_200003F4 = (unsigned __int16)&unk_00000500;
    unk_200003F6 = (unsigned int)&unk_00000500 >> 1;
    sub_800625C();
    byte_200004B2 = 0;
    dword_200003F8 = -0x94Fu;
    dword_200003FC = 2383;
    byte_20000400[0] = -39043072;
    v2 = 0x253C000;
    unk_20000404[0] = 0x253C000;
    v3 = a1 << 14;
    if ( a1 << 14 >= 0x253C001 || (v2 = byte_20000400[0], v3 < byte_20000400[0]) )
    {
        v3 = v2;
    }
    unk_20000408 = v3;
}
// 2000031A: using guessed type __int16 mb_max_amp_2[2];
// 2000031C: using guessed type __int16;
// 200003F4: using guessed type __int16 word_200003F4;
// 200003F8: using guessed type int dword_200003F8;
// 200003FC: using guessed type int dword_200003FC;
// 20000400: using guessed type int byte_20000400[11];
// 20000404: using guessed type int unk_20000404[10];
// 200004A8: using guessed type _WORD word_200004A8[3];
// 200004AA: using guessed type _WORD;
// 200004B2: using guessed type char byte_200004B2;

//----- (080056F8) --------------------------------------------------------
__int16 *sub_80056F8()
{
    __int16 *result; // r0

    result = (__int16 *)(error_bits << 6);
    if ( (error_bits & 0x2000000) == 0 )
    {
        result = &word_200003F4;
        word_200003F4 = 1024;
        unk_200003F6 = 16;
        dword_200003F8 = -238;
        dword_200003FC = 17872;
        byte_20000400[0] = -974848;
        unk_20000404[0] = 73203712;
    }
    return result;
}
// 200003F4: using guessed type __int16 word_200003F4;
// 200003F8: using guessed type int dword_200003F8;
// 200003FC: using guessed type int dword_200003FC;
// 20000400: using guessed type int byte_20000400[11];
// 20000404: using guessed type int unk_20000404[10];

//----- (0800573C) --------------------------------------------------------
void __cdecl sub_800573C()
{
    int v0; // r0
    __int16 v1; // r0
    __int16 v2; // r0

    if ( (error_bits & 0x10000) != 0 )
    {
        v2 = sub_8004CF8();
        mb_max_amp_2[1] = sub_8006150(v2, word_20000320, &word_20000300, 1);
        v1 = mb_max_amp_2[1] + word_200004A8[0];
    }
    else
    {
        if ( word_200001FE || (error_bits & UNDER_VOLT) != 0 || (error_bits & BIT_19) == 0 )
        {
            LOWORD(v0) = sub_8006150(mb_max_amp_2[0], mb_current_amp_mul_100[0], &word_200002E8, 1);
        }
        else
        {
            LOWORD(v0) = 0;
        }
        if ( (error_bits & 0x2000000) != 0 )
        {
            v0 = -(__int16)v0;
        }
        mb_max_amp_2[1] = v0;
        v1 = v0 + word_200004A8[0];
        if ( main_loop_state == 4 || main_loop_state == 3 )
        {
            if ( dword_200003FC >= v1 )
            {
                if ( v1 < dword_200003F8 )
                {
                    v1 = dword_200003F8;
                }
            }
            else
            {
                v1 = dword_200003FC;
            }
        }
    }
    word_2000031E = v1;
}
// 200001FE: using guessed type unsigned __int16 word_200001FE;
// 200002E8: using guessed type __int16 word_200002E8;
// 20000300: using guessed type __int16 word_20000300;
// 2000031A: using guessed type __int16 mb_max_amp_2[2];
// 2000031C: using guessed type __int16;
// 2000031E: using guessed type __int16 word_2000031E;
// 20000320: using guessed type __int16 word_20000320;
// 20000322: using guessed type _WORD mb_current_amp_mul_100[3];
// 200003F8: using guessed type int dword_200003F8;
// 200003FC: using guessed type int dword_200003FC;
// 200004A8: using guessed type _WORD word_200004A8[3];
// 200004B1: using guessed type char main_loop_state;

//----- (080057DC) --------------------------------------------------------
int sub_80057DC()
{
    return mb_max_amp_2[1];
}
// 200002D0: using guessed type unsigned __int8 byte_200002D0[74];
// 2000031A: using guessed type __int16 word_2000031A[2];

//----- (08005828) --------------------------------------------------------
void __cdecl update_selected_gear_mode()
{
    int mode; // r0

    mode = (unsigned __int8)current_gear_mode_1;
    runtime_selected_gear_mode_const_1 = gear_mode_consts_1[mode];
    runtime_selected_gear_mode_const_2 = gear_mode_consts_2[mode];
}
// 8005A60: using guessed type __int16 gear_mode_consts_1[4];
// 8005A68: using guessed type __int16 gear_mode_consts_2[4];
// 200003B4: using guessed type __int16 runtime_selected_gear_mode_const_1;
// 200003B6: using guessed type __int16 runtime_selected_gear_mode_const_2;

//----- (08005840) --------------------------------------------------------
void __cdecl some_mode_switch_handling_2()
{
    GEAR_MODE gear; // r1
    int mode; // r0

    mb_some_speed();
    unk_200003BA = 6 * mb_some_speed();
    // GEAR or MODE pin (0-5v)
    is_mode_button_pressed_2 = -!is_input_port_bit_set(&GPIO_A, 0x1000) < 0;
    handle_button_press((unsigned __int8)is_mode_button_pressed_2, &PA12_GEAR_L_BUTTON_2);
    gear = LOW;
    if ( !prev_mb_p_or_gear && mb_p_or_gear == 1 )
    {
        PA12_GEAR_L_BUTTON_2.is_down = 0;
        current_gear_mode_2 = LOW;
    }
    if ( PA12_GEAR_L_BUTTON_2.valid_push == 1 )
    {
        if ( mb_mode_hold_down_timer >= 400u )
        {
            PA12_GEAR_L_BUTTON_2.is_down = 0;
        }
        else
        {
            ++mb_mode_hold_down_timer;
        }
    }
    else
    {
        mb_mode_hold_down_timer = 0;
        if ( PA12_GEAR_L_BUTTON_2.is_down == 1 && !PA12_GEAR_L_BUTTON_2.valid_push )
        {
            PA12_GEAR_L_BUTTON_2.is_down = 0;
            if ( current_gear_mode_2 )
            {
                if ( current_gear_mode_2 == LOW )
                {
                    if ( mb_two_speed_mode == 1 )
                    {
                        current_gear_mode_2 = HIGH;
                        goto LABEL_18;
                    }
                    gear = VERY_HIGH_1;
                }
            }
            else if ( mb_two_speed_mode != 1 )
            {
                goto LABEL_18;
            }
            current_gear_mode_2 = gear;
        }
    }
LABEL_18:
    prev_mb_p_or_gear = mb_p_or_gear;
    current_gear_mode_1 = current_gear_mode_2;
    some_selected_gear_mode_runtime_const_3();
    mode = (unsigned __int8)current_gear_mode_1;
    runtime_selected_gear_mode_const_1 = gear_mode_consts_1[mode];
    runtime_selected_gear_mode_const_2 = gear_mode_consts_2[mode];
}
// 8005848: conditional instruction was optimized away because r0.4<10000u
// 8005A60: using guessed type __int16 gear_mode_consts_1[4];
// 8005A68: using guessed type __int16 gear_mode_consts_2[4];
// 20000274: using guessed type char mb_p_or_gear;
// 200003B2: using guessed type char is_mode_button_pressed_2;
// 200003B4: using guessed type __int16 runtime_selected_gear_mode_const_1;
// 200003B6: using guessed type __int16 runtime_selected_gear_mode_const_2;
// 200003B8: using guessed type unsigned __int16 mb_mode_hold_down_timer;
// 20001FAD: using guessed type char mb_two_speed_mode;
// 48000000: using guessed type GPIO_PORT_STRUCT GPIO_A;

//----- (080058FC) --------------------------------------------------------
void __cdecl check_for_secret_profile_change()
{
    __int16 v0; // r0
    int v1; // r0
    BOOL is_break_h; // r0
    unsigned __int8 mycounter; // r1
    int v4; // r1
    __int16 v5; // r2

    // PF0
    if ( !is_input_port_bit_set(&GPIO_F, 1) || runtime_config_type_1.use_limited_profile == 1 )
    {
        byte_200003B0 = 0;
        if ( (unsigned __int8)PF01_low_time_counter < 20u )
        {
            ++PF01_low_time_counter;
            goto LABEL_12;
        }
        if ( mb_two_speed_mode == 1 )
        {
            goto LABEL_12;
        }
        mb_two_speed_mode = 1;
        current_gear_mode_1 = VERY_HIGH_2;
        runtime_selected_gear_mode_const_1 = 2426;
        v0 = 83;
LABEL_10:
        runtime_selected_gear_mode_const_2 = v0;
        some_selected_gear_mode_runtime_const_3();
        goto LABEL_12;
    }
    PF01_low_time_counter = 0;
    if ( (unsigned __int8)byte_200003B0 >= 20u )
    {
        if ( !mb_two_speed_mode )
        {
            goto LABEL_12;
        }
        mb_two_speed_mode = 0;
        current_gear_mode_1 = current_gear_mode_2;
        v1 = (unsigned __int8)current_gear_mode_2;
        runtime_selected_gear_mode_const_1 = gear_mode_consts_1[v1];
        v0 = gear_mode_consts_2[v1];
        goto LABEL_10;
    }
    ++byte_200003B0;
LABEL_12:
    // Funny way of saying PA11 Break H
    is_break_h = is_input_port_bit_set(&GPIO_A, (unsigned int)&dst >> 18);
    if ( is_break_h )
    {
        LOBYTE(is_break_h) = 1;
    }
    local_is_break_h = is_break_h;
    mycounter = my_counter[0];
    if ( is_break_h == last_is_break_h[0] )
    {
        mycounter = 0;
    }
    else if ( my_counter[0] >= 10u )
    {
        last_is_break_h[0] = local_is_break_h;
    }
    else
    {
        mycounter = my_counter[0] + 1;
    }
    my_counter[0] = mycounter;
    LOBYTE(v4) = byte_20001FCF;
    if ( (unsigned __int16)local_some_counter < 100u )
    {
        if ( word_200003BC >= 12000u )
        {
            v5 = 100;
LABEL_28:
            local_some_counter = v5;
            goto LABEL_41;
        }
        ++word_200003BC;
        if ( (unsigned __int16)local_some_counter < 25u )
        {
            ++local_some_counter;
            goto LABEL_41;
        }
        if ( local_some_counter == 25 )
        {
            if ( !last_is_break_h[0] && (unsigned int)mb_throttle_value >= 0xB26D )
            {
                v5 = 26;
                goto LABEL_28;
            }
        }
        else if ( local_some_counter == 26 )
        {
            if ( last_is_break_h[0] )
            {
                if ( (unsigned int)mb_throttle_value < 0x41F1 )
                {
                    LOBYTE(v4) = 0;
                    local_some_counter = 0;
                }
            }
            else if ( (unsigned int)mb_throttle_value >= 0x41F1 )
            {
                if ( (unsigned int)mb_throttle_value >= 0xB26D && mb_trottle_low == 1 )
                {
                    mb_trottle_low = 0;
                    v4 = (unsigned __int8)(byte_20001FCF + 1);
                    if ( v4 == 3 )
                    {
                        ++jimmy_two_times;
                    }
                }
            }
            else
            {
                mb_trottle_low = 1;
            }
            if ( jimmy_two_times == 2 )
            {
                local_some_counter = 100;
                unk_200003C0 = 0;
                // Flip Flop 
                runtime_config_type_1.use_limited_profile = runtime_config_type_1.use_limited_profile == 0;
                config_updated = 1;
            }
        }
    }
LABEL_41:
    byte_20001FCF = v4;
}
// 8005A60: using guessed type __int16 gear_mode_consts_1[4];
// 8005A68: using guessed type __int16 gear_mode_consts_2[4];
// 20000240: using guessed type int mb_throttle_value;
// 200003B0: using guessed type char byte_200003B0;
// 200003B1: using guessed type char PF01_low_time_counter;
// 200003B4: using guessed type __int16 runtime_selected_gear_mode_const_1;
// 200003B6: using guessed type __int16 runtime_selected_gear_mode_const_2;
// 200003BC: using guessed type unsigned __int16 word_200003BC;
// 200003BE: using guessed type unsigned __int16 jimmy_two_times;
// 200004B9: using guessed type char config_updated;
// 20001FA3: using guessed type char mb_trottle_low;
// 20001FA5: using guessed type unsigned __int8 last_is_break_h[8];
// 20001FAD: using guessed type char mb_two_speed_mode;
// 20001FCF: using guessed type char byte_20001FCF;
// 20001FD0: using guessed type unsigned __int8 my_counter[10];
// 20001FDA: using guessed type __int16 local_some_counter;
// 48000000: using guessed type GPIO_PORT_STRUCT GPIO_A;

//----- (08005A70) --------------------------------------------------------
void __usercall sub_8005A70()
{
    int v0; // r1
    __int16 v1; // t1
    __int64 v2; // [sp+0h] [bp-18h] BYREF

    sub_80033D6(0x40000, 1);
    sub_80033FE(256, 1);
    sub_800354E((int)&GPIO_B, 1u, 0);
    v2 = 0x20200000002LL;
    init_port(&GPIO_B, (struc_20000A30 *)&v2);
    v0 = RCC_APB1RSTR;
    RCC_APB1RSTR = v0 | 0x100;
    RCC_APB1RSTR = v0 & 0xFFFFFEFF;
    LOWORD(TIM14_CCMR1_Output) = 96;
    TIM14_ARR = 3000;
    LOWORD(TIM14_CCER) = 1;
    v1 = TIM14_CR1;
    LOWORD(TIM14_CR1) = v1 | 1;
}
// 40002000: using guessed type int TIM14_CR1;
// 40002018: using guessed type int TIM14_CCMR1_Output;
// 40002020: using guessed type int TIM14_CCER;
// 4000202C: using guessed type int TIM14_ARR;
// 40021010: using guessed type int RCC_APB1RSTR;

//----- (08005ACE) --------------------------------------------------------
unsigned int __fastcall sub_8005ACE()
{
    int v0; // r0
    int v1; // r0
    int v2; // r4
    unsigned int v3; // r0
    unsigned int result; // r0

    v0 = 6 * (unsigned __int16)mb_some_speed();
    if ( v0 < 0 )
    {
        v0 = -v0;
    }
    v1 = v0 << 6;
    dword_20000484 = v1;
    if ( v1 )
    {
        v2 = (2797 * v1) >> 16;
    }
    else
    {
        v2 = 0;
    }
    v3 = sub_8004CF8();
    result = mb_divide(960 * v2, v3);
    if ( result >= 3001 )
    {
        result = 3000;
    }
    word_200004AE = result;
    return result;
}
// 20000484: using guessed type int dword_20000484;
// 200004AE: using guessed type __int16 word_200004AE;

//----- (08005B18) --------------------------------------------------------
int sub_8005B18()
{
    return 0;
}

//----- (08005B1C) --------------------------------------------------------
void __cdecl mb_limit_speed_17_35()
{
    if ( current_gear_mode_2 && current_gear_mode_2 == LOW )
    {
        if ( mb_max_amp_2[0] >= 1701 )
        {
            mb_max_amp = 1700;
        }
    }
    else if ( mb_max_amp_2[0] >= 3501 )
    {
        mb_max_amp = 3500;
    }
}
// 2000031A: using guessed type __int16 mb_max_amp_2[2];
// 2000042E: using guessed type __int16 mb_max_amp;

//----- (08005B58) --------------------------------------------------------
void __cdecl mb_limit_speed_17_20()
{
    if ( current_gear_mode_2 && current_gear_mode_2 == LOW )
    {
        if ( mb_max_amp_2[0] >= 1701 )
        {
            mb_max_amp = 1700;
        }
    }
    else if ( mb_max_amp_2[0] >= 2001 )
    {
        mb_max_amp = 2000;
    }
}
// 2000031A: using guessed type __int16 mb_max_amp_2[2];
// 2000042E: using guessed type __int16 mb_max_amp;

//----- (08005B8A) --------------------------------------------------------
void __cdecl mb_setup_uart()
{
    struc_20000A30 v0; // [sp+0h] [bp-30h] BYREF
    usart_struct mb_uart_setup; // [sp+8h] [bp-28h] BYREF

    RCC_APB2ENR_clear_or_set(0x4000, 1);
    v0.bits = 192;
    *(_DWORD *)&v0.type = 0x1000302;
    init_port(&GPIO_B, &v0);
    reset_GPIO_pin(&GPIO_F, 0x40);
    mb_uart_setup.baud = 9600;
    memset(&mb_uart_setup.field_4, 0, 12);
    mb_uart_setup.is_12 = 12;
    mb_uart_setup.field_14 = 0;
    mb_usart_setup(&USART1_CR1, &mb_uart_setup);
    mb_bit_set_or_clear((int *)&USART1_CR1, 1);
    usart_is_initialized = 1;
}
// 200004B0: using guessed type char usart_is_initialized;

//----- (08005BF8) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __fastcall rx_byte_0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    char rx_byte; // r0
    unsigned __int16 i; // r2
    unsigned int v10; // r6

    if ( !is_tx40_or_rx20_status_0((int)&USART1_CR1, 0x20) )
    {
        // is_overrun
LABEL_7:
        if ( is_tx40_or_rx20_status_0((int)&USART1_CR1, 8) )
        {
            USART1_CR1 &= ~1u;
            v10 = USART1_CR1 | 1;
            USART1_CR1 = v10;
            set_USART_ICR_bit((int)&USART1_CR1, 8);
        }
        __asm { POP     {R4-R6,PC}; Pop registers }
    }
    RS485.mb_usart_timeout = (int)&unk_00000000;
    set_USART_ICR_bit((int)&USART1_CR1, 0x20);
    rx_byte = rx_9_bits((int)&USART1_CR1);
    if ( RS485.rx_read_counter_elapsed != 1 )
    {
        i = RS485.rx_buffer_index;
        if ( RS485.rx_buffer_index < 64u )
        {
            rx_buffer[RS485.rx_buffer_index] = rx_byte;
            RS485.rx_buffer_index = i + 1;
            RS485.rx_read_counter_running = 1;
            RS485.rx_read_counter_value = 3;
        }
        else
        {
            rx_buffer[63] = rx_byte;
        }
        goto LABEL_7;
    }
    rx_buffer[63] = rx_byte;
}
// 8005C54: positive sp value 10C has been found
// 8005C64: unbalanced stack, ignored a potential tail call
// 20000244: using guessed type struc_20000244 RS485;

//----- (08005C66) --------------------------------------------------------
void poll_tx_buffer()
{
    if ( RS485.tx_ready == 1 )
    {
        set_GPIO_pin(&GPIO_F, 0x40);
        if ( is_tx40_or_rx20_status_0((int)&USART1_CR1, 0x40) )
        {
            if ( RS485.tx_buffer_index >= RS485.tx_packet_size + 1 )
            {
                RS485.tx_ready = 0;
                reset_GPIO_pin(&GPIO_F, 0x40);
            }
            else
            {
                // GEAR or MODE pin (0-5v)
                tx_byte_0((int)&USART1_CR1, tx_buffer[RS485.tx_buffer_index]);
                ++RS485.tx_buffer_index;
            }
        }
    }
}
// 20000244: using guessed type struc_20000244 RS485;

//----- (08005CB2) --------------------------------------------------------
void __cdecl update_counter_1()
{
    if ( RS485.rx_read_counter_running == 1 )
    {
        if ( RS485.rx_read_counter_value )
        {
            --RS485.rx_read_counter_value;
        }
        else
        {
            RS485.rx_read_counter_running = RS485.rx_read_counter_value;
            RS485.rx_read_counter_elapsed = 1;
        }
    }
}
// 20000244: using guessed type struc_20000244 seems_important;

//----- (08005D0C) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __fastcall rx_buffer_command_handler()
{
    unsigned __int16 v0; // r0
    int v1; // r1
    void (*v2)(void); // [sp+14h] [bp-4h]

    ++RS485.mb_usart_timeout;
    if ( RS485.tx_command_timer >= 450u )
    {
        v0 = 0;
    }
    else
    {
        v0 = RS485.tx_command_timer + 1;
    }
    RS485.tx_command_timer = v0;
    tx_command_loop();
    if ( RS485.rx_read_counter_elapsed == 1 )
    {
        RS485.rx_read_counter_elapsed = 0;
        RS485.field_9 = 0;
        ++RS485.field_1E;
        if ( rx_buffer[0] == 0x47 && rx_buffer[1] == 0x16 && rx_buffer[2] == 1 )
        {
            if ( rx_buffer[3] == 0xD )
            {
                // This one we have seen in the traffic
                if ( rx_buffer[4] == 4 )
                {
                    RS485.mb_battery_level_2 = rx_buffer[5];
                    RS485.battery_level = (unsigned __int8)rx_buffer[5];
                    RS485.mb_battery_level_3 = rx_buffer[5];
                    RS485.mb_rx_type_d_4_received = 1;
                    goto LABEL_15;
                }
            }
            // This one we have seen in the traffic
            else if ( rx_buffer[3] == 8 && rx_buffer[4] == 4 )
            {
                RS485.from_rx_buffer_5_type_8_4 = (unsigned __int8)rx_buffer[5];
                RS485.from_rx_buffer_6_type_8_4 = (unsigned __int8)rx_buffer[6];
                RS485.from_rx_buffer_7_type_8_4 = (unsigned __int8)rx_buffer[7];
                RS485.from_rx_buffer_8_type_8_4 = (unsigned __int8)rx_buffer[8];
                RS485.mb_rx_type_8_4_received = 1;
            }
        }
        if ( RS485.mb_rx_type_d_4_received != 1 )
        {
LABEL_17:
            RS485.mb_error_bits &= ~0x10u;
            RS485.field_A = 1;
            RS485.rx_buffer_index = 0;
            RS485.mb_usart_timeout = 0;
            v2();
            return;
        }
LABEL_15:
        if ( RS485.mb_rx_type_8_4_received == 1 )
        {
            RS485.mb_waiting_for_rx_type_8_4_counter = 0;
        }
        goto LABEL_17;
    }
    if ( RS485.mb_waiting_for_rx_type_8_4_counter < 4000u && RS485.field_A == 1 )
    {
        ++RS485.mb_waiting_for_rx_type_8_4_counter;
    }
    else
    {
        RS485.field_A = 0;
        RS485.field_9 = 1;
    }
    mb_some_speed();
    v1 = (unsigned __int16)mb_some_speed();
    if ( RS485.field_9 == 1 && !(0x60000 * v1) )
    {
        RS485.mb_error_bits |= 0x10u;
        RS485.battery_level = 0;
    }
    if ( RS485.mb_usart_timeout >= 501u )
    {
        tx_command_loop();
        RS485.mb_usart_timeout = 0;
        mb_setup_uart();
    }
}
// 8005DA2: positive sp value 18 has been found
// 8005DC2: conditional instruction was optimized away because r0.4<10000u
// 8005DA0: variable 'v2' is possibly undefined
// 20000244: using guessed type struc_20000244 RS485;

//----- (08005E1C) --------------------------------------------------------
__int64 tx_command_loop()
{
    int break_released; // r6
    int v1; // r1
    __int16 v2; // r0
    char bits; // r0 MAPDST
    char mb_error_bits; // r0
    char bits_2; // r2
    int v11; // r0
    char mb_checksum; // r1
    char gear_0_1_or_2; // r6
    signed int v14; // r1
    __int16 mb_speed; // r0
    __int64 v17; // [sp+0h] [bp-20h]

    break_released = 0;
    // BREAK High PA11
    if ( is_input_port_bit_set(&GPIO_A, 0x800) )
    {
        RS485.break_pressed = 1;
    }
    else if ( !RS485.break_pressed )
    {
        if ( (unsigned __int8)RS485.break_release_debounche_counter >= 5u )
        {
            break_released = 1;
        }
        else
        {
            ++RS485.break_release_debounche_counter;
        }
    }
    LOBYTE(v1) = RS485.field_F;
    HIDWORD(v17) = last_is_break_h;
    if ( !last_is_break_h[0] && RS485.field_10 == 1 )
    {
        v2 = *(_WORD *)&RS485.field_26 + 1;
        if ( (unsigned __int16)(*(_WORD *)&RS485.field_26 + 1) >= 10000u )
        {
            v2 = 0;
            RS485.field_10 = 0;
            goto LABEL_11;
        }
        goto LABEL_14;
    }
    v2 = 0;
    if ( !last_is_break_h[0] )
    {
LABEL_14:
        if ( (unsigned int)mb_throttle_value >= 0x41F1 )
        {
            if ( (unsigned int)mb_throttle_value >= 0xB26D && RS485.field_11 == 1 )
            {
                RS485.field_11 = 0;
                v1 = (unsigned __int8)(RS485.field_F + 1);
                if ( v1 == 2 )
                {
                    RS485.flip_flop_field = RS485.flip_flop_field == 0;
                }
            }
        }
        else
        {
            RS485.field_11 = 1;
        }
        goto LABEL_11;
    }
    if ( (unsigned int)mb_throttle_value < 0x41F1 )
    {
        LOBYTE(v1) = 0;
        RS485.field_10 = 1;
    }
LABEL_11:
    RS485.field_F = v1;
    *(_WORD *)&RS485.field_26 = v2;
    if ( (unsigned __int16)word_200002D6 < 60u )
    {
        bits = RS485.controller_status_bits & 0x7F;
    }
    else
    {
        bits = RS485.controller_status_bits | 0x80;
    }
    LODWORD(v17) = byte_20001F83;
    if ( error_bits_bit_1_is_set[0] == 1 )
    {
        bits |= 0x40u;
    }
    else
    {
        bits &= ~0x40u;
    }
    RS485.field_12 = error_bits_bit_1_is_set[0];
    if ( byte_20001F83[0] == 1 )
    {
        bits |= 0x20u;
    }
    else
    {
        bits &= ~0x20u;
    }
    if ( (error_bits & 0x800) != 0 )
    {
        bits |= 8u;
    }
    else
    {
        bits &= ~8u;
    }
    if ( break_released )
    {
        bits |= 2u;
    }
    else
    {
        bits &= ~2u;
    }
    if ( (error_bits & 0x20) != 0 )
    {
        bits |= 0x11u;
    }
    else
    {
        bits &= 0xEEu;
    }
    RS485.controller_status_bits = bits;
    mb_error_bits = RS485.mb_error_bits;
    if ( mb_p_or_gear != 1 )
    {
        goto LABEL_51;
    }
    bits_2 = RS485.mb_error_bits | 2;
    if ( error_bits_bit_1_is_set[0] == 1 )
    {
        bits_2 = RS485.mb_error_bits & 0xFD;
    }
    if ( byte_20001F83[0] == 1 )
    {
        bits_2 &= ~2u;
    }
    if ( error_bits << 16 )
    {
        bits_2 &= ~2u;
    }
    if ( (error_bits & 0x800) != 0 )
    {
        bits_2 &= ~2u;
    }
    if ( break_released )
    {
        bits_2 &= ~2u;
    }
    RS485.mb_error_bits = bits_2;
    // PC15
    if ( !is_input_port_bit_set(&GPIO_C, 0x8000) )
    {
        mb_error_bits = RS485.mb_error_bits;
LABEL_51:
        RS485.mb_error_bits = mb_error_bits & 0xFD;
    }
    // PC15
    if ( is_input_port_bit_set(&GPIO_C, 0x8000) )
    {
        LOBYTE(v11) = RS485.mb_error_bits & 0xF7;
    }
    else
    {
        v11 = RS485.mb_error_bits | 8;
    }
    // mb ask BMC command 1 ?
    RS485.mb_error_bits = v11;
    if ( RS485.tx_command_timer == 300 )
    {
        tx_buffer[0] = 0x46;
        tx_buffer[1] = 0x16;
        tx_buffer[2] = 1;
        tx_buffer[3] = 0xD;
        tx_buffer[4] = 4;
        mb_checksum = 0x6E;
    }
    else
    {
        // mb ask BMC command 2 ?
        if ( RS485.tx_command_timer != 450 )
        {
            goto LABEL_60;
        }
        tx_buffer[0] = 0x46;
        tx_buffer[1] = 0x16;
        tx_buffer[2] = 1;
        tx_buffer[3] = 8;
        tx_buffer[4] = 4;
        mb_checksum = 0x69;
    }
    tx_buffer[5] = mb_checksum;
    RS485.tx_packet_size = 5;
    RS485.tx_ready = 1;
    RS485.tx_buffer_index = 0;
LABEL_60:
    gear_0_1_or_2 = 0;
    mb_some_speed();
    v14 = (unsigned __int16)(6 * mb_some_speed());
    if ( v14 )
    {
        mb_speed = divide_0(60000, v14);
    }
    else
    {
        mb_speed = 30000;
    }
    if ( mb_p_or_gear && current_gear_mode_2 != LOW )
    {
        if ( current_gear_mode_2 == HIGH )
        {
            gear_0_1_or_2 = 2;
        }
        if ( current_gear_mode_2 == VERY_HIGH_1 )
        {
            gear_0_1_or_2 = 2;
        }
    }
    else
    {
        gear_0_1_or_2 = 1;
    }
    // mb send status info to the display ?
    if ( RS485.tx_command_timer == 150 )
    {
        tx_buffer[0] = 2;
        tx_buffer[1] = 0xE;
        tx_buffer[2] = 1;
        tx_buffer[3] = RS485.controller_status_bits;
        tx_buffer[4] = RS485.mb_error_bits;
        tx_buffer[5] = 8;
        // 1, 0 or 2
        tx_buffer[6] = gear_0_1_or_2;
        tx_buffer[7] = 0;
        tx_buffer[8] = HIBYTE(mb_speed);
        tx_buffer[9] = mb_speed;
        // mb batt level ?
        tx_buffer[10] = RS485.battery_level;
        tx_buffer[11] = 0;
        tx_buffer[12] = RS485.flip_flop_field;
        tx_buffer[13] = 0;
        RS485.tx_packet_size = 13;
        RS485.tx_ready = 1;
        RS485.tx_buffer_index = 0;
    }
    return v17;
}
// 8005FEC: conditional instruction was optimized away because r0.4<10000u
// 20000240: using guessed type int mb_throttle_value;
// 20000244: using guessed type struc_20000244 RS485;
// 20000274: using guessed type char mb_p_or_gear;
// 200002D6: using guessed type __int16 word_200002D6;
// 20001F83: using guessed type unsigned __int8 byte_20001F83[2];
// 20001F86: using guessed type unsigned __int8 error_bits_bit_1_is_set[29];
// 20001FA5: using guessed type unsigned __int8 last_is_break_h[8];
// 48000000: using guessed type GPIO_PORT_STRUCT GPIO_A;

//----- (08006074) --------------------------------------------------------
void sub_8006074()
{
    // PC15
    is_input_port_bit_set(&GPIO_C, 0x8000);
    JUMPOUT(0x80060E4);
}
// 8006088: control flows out of bounds to 80060E4

//----- (080060C4) --------------------------------------------------------
void __cdecl poll_PC15_CAN_H_PIN15()
{
    unsigned __int8 valid_push; // r0

    // PC15
    is_PC15_pressed = !is_input_port_bit_set(&GPIO_C, 0x8000);
    handle_button_press((unsigned __int8)is_PC15_pressed, &stru_20000440);
    valid_push = stru_20000440.valid_push;
    if ( stru_20000440.valid_push )
    {
        valid_push = 1;
    }
    PC15_global_status = valid_push;
}
// 2000043C: using guessed type char is_PC15_pressed;
// 2000043D: using guessed type char PC15_global_status;

//----- (080060FA) --------------------------------------------------------
_DWORD **__fastcall controller_main_reset_function_1(_DWORD *a1)
{
    int v1; // r9
    int v2; // r3
    _DWORD **result; // r0
    _DWORD *v4; // r4

    while ( 1 )
    {
        v2 = *a1;
        result = (_DWORD **)(a1 + 1);
        if ( !v2 )
        {
            break;
        }
        v4 = *result;
        a1 = result + 1;
        if ( ((unsigned __int8)v4 & 1) != 0 )
        {
            v4 = (_DWORD *)((char *)v4 + v1 - 1);
        }
        do
        {
            *v4++ = 0;
            v2 -= 4;
        }
        while ( v2 );
    }
    return result;
}
// 8006112: variable 'v1' is possibly undefined

//----- (08006124) --------------------------------------------------------
void __fastcall hmm_two_same_kind_lists_sub_8006124(int a1, int a2)
{
    word_200004A8[0] = 0;
    *(_WORD *)a1 = 80;
    *(_WORD *)(a1 + 2) = 40;
    *(_DWORD *)(a1 + 20) = 0;
    word_200004A4[0] = 0;
    *(_WORD *)a2 = 800;
    *(_WORD *)(a2 + 2) = 1100;
    *(_DWORD *)(a2 + 20) = 0;
    some_selected_gear_mode_runtime_const_3();
}
// 200004A4: using guessed type __int16 word_200004A4[2];
// 200004A8: using guessed type _WORD word_200004A8[3];

//----- (08006150) --------------------------------------------------------
int __fastcall sub_8006150(int a1, int a2, __int16 *a3, int a4)
{
    int diff; // r0
    int v6; // r3
    int v7; // r4
    __int64 v8; // r0
    int v9; // r1
    int v10; // r0
    int v11; // r1
    int result; // r0

    diff = a1 - a2;
    v6 = *a3 * diff;
    if ( a3[1] )
    {
        v8 = diff * a3[1] + (__int64)*((int *)a3 + 5);
        v7 = *((_DWORD *)a3 + 4);
        if ( v7 >= v8 )
        {
            v7 = *((_DWORD *)a3 + 3);
            if ( v8 >= v7 )
            {
                v7 = v8;
            }
        }
    }
    else
    {
        v7 = 0;
    }
    *((_DWORD *)a3 + 5) = v7;
    switch ( a4 )
    {
        case 0:
            v9 = v6 / 1024;
            v10 = v7 / 0x4000;
            goto LABEL_16;
        case 3:
            v9 = v6 / 128;
            v10 = v7 / 0x1000;
            goto LABEL_16;
        case 2:
            goto LABEL_15;
        case 4:
            v9 = v6 / 256;
            v10 = v7 / 0x2000;
            goto LABEL_16;
    }
    if ( a4 != 5 )
    {
LABEL_15:
        v9 = v6 / 64;
        v10 = v7 / 2048;
    }
    else
    {
        v9 = v6 / 512;
        v10 = v7 / 0x4000;
    }
LABEL_16:
    v11 = v9 + v10;
    result = *((_DWORD *)a3 + 2);
    if ( v11 < result )
    {
        result = *((_DWORD *)a3 + 1);
        if ( v11 >= result )
        {
            return v11;
        }
    }
    return result;
}

//----- (08006218) --------------------------------------------------------
void __cdecl sub_8006218()
{
    word_200003DC = 80;
    unk_200003DE = 40;
    word_200003C4 = 800;
    unk_200003C6 = 1100;
}
// 200003C4: using guessed type __int16 word_200003C4;
// 200003DC: using guessed type __int16 word_200003DC;

//----- (08006230) --------------------------------------------------------
void __cdecl sub_8006230()
{
    word_200003DC = 80;
    unk_200003DE = 40;
    word_200003C4 = 32;
    unk_200003C6 = 16;
}
// 200003C4: using guessed type __int16 word_200003C4;
// 200003DC: using guessed type __int16 word_200003DC;

//----- (08006246) --------------------------------------------------------
void __cdecl sub_8006246()
{
    word_200003DC = 128;
    unk_200003DE = 128;
    word_200003C4 = 800;
    unk_200003C6 = 1100;
}
// 200003C4: using guessed type __int16 word_200003C4;
// 200003DC: using guessed type __int16 word_200003DC;

//----- (0800625C) --------------------------------------------------------
void __cdecl sub_800625C()
{
    word_200003DC = 225;
    unk_200003DE = 20;
    word_200003C4 = 1600;
    unk_200003C6 = 2200;
}
// 200003C4: using guessed type __int16 word_200003C4;
// 200003DC: using guessed type __int16 word_200003DC;

//----- (08006274) --------------------------------------------------------
void __cdecl sub_8006274()
{
    word_200003DC = 160;
    unk_200003DE = 220;
    word_200003C4 = 1600;
    unk_200003C6 = 2200;
}
// 200003C4: using guessed type __int16 word_200003C4;
// 200003DC: using guessed type __int16 word_200003DC;

//----- (0800628C) --------------------------------------------------------
void __fastcall sub_800628C(ERROR_BITS_ENUM a1)
{
    word_200003DC = 400;
    unk_200003DE = 550;
    word_200003C4 = 32;
    unk_200003C6 = 16;
}
// 200003C4: using guessed type __int16 word_200003C4;
// 200003DC: using guessed type __int16 word_200003DC;

//----- (080062A4) --------------------------------------------------------
__int16 __fastcall sub_80062A4(__int16 result, __int16 a2)
{
    word_200003DC = result;
    unk_200003DE = a2;
    return result;
}
// 200003DC: using guessed type __int16 word_200003DC;

//----- (080062AC) --------------------------------------------------------
__int16 __fastcall sub_80062AC(__int16 result, __int16 a2)
{
    word_200003C4 = result;
    unk_200003C6 = a2;
    return result;
}
// 200003C4: using guessed type __int16 word_200003C4;

//----- (080062CC) --------------------------------------------------------
int __fastcall sub_80062CC(int a1)
{
    int v2; // [sp+0h] [bp-8h]

    LOWORD(v2) = a1;
    HIWORD(v2) = 0x49E6 * (__int16)a1 / -32768 - 2 * (0x49E6 * SHIWORD(a1) / 0x8000);
    return v2;
}

//----- (08006304) --------------------------------------------------------
_WORD *__fastcall sub_8006304(int a1, int a2, int a3)
{
    unsigned int v3; // r0
    int v4; // r3
    _WORD *result; // r0

    v3 = (unsigned int)((a1 - 0x8000) << 16) >> 22;
    v4 = v3 & 0x300;
    if ( (v3 & 0x300) != 0 )
    {
        switch ( v4 )
        {
            case 256:
                a2 = -*(__int16 *)((char *)word_8006580 + ((2 * (255 - v3)) & 0x1FF));
                break;
            case 512:
                LOWORD(a2) = *(__int16 *)((char *)word_8006580 + ((2 * v3) & 0x1FF));
                v3 = 255 - v3;
                break;
            case 768:
                LOWORD(a2) = *(__int16 *)((char *)word_8006580 + ((2 * (255 - v3)) & 0x1FF));
                goto LABEL_9;
            default:
                goto LABEL_12;
        }
        LOWORD(a3) = *(__int16 *)((char *)word_8006580 + ((2 * v3) & 0x1FF));
        goto LABEL_12;
    }
    a2 = -*(__int16 *)((char *)word_8006580 + ((2 * v3) & 0x1FF));
    v3 = 255 - v3;
LABEL_9:
    a3 = -*(__int16 *)((char *)word_8006580 + ((2 * v3) & 0x1FF));
LABEL_12:
    result = &word_2000048C;
    word_2000048C = a3;
    word_2000048E = a2;
    return result;
}
// 8006580: using guessed type __int16 word_8006580[256];
// 2000048C: using guessed type _WORD word_2000048C;
// 2000048E: using guessed type __int16 word_2000048E;

//----- (0800638C) --------------------------------------------------------
int __fastcall sub_800638C(int a1, int a2, int a3)
{
    unsigned int v3; // r1
    int v4; // r3
    int v6; // [sp+0h] [bp-18h]
    int v7; // [sp+4h] [bp-14h]

    v7 = a1;
    v3 = (unsigned int)((a2 - 0x8000) << 16) >> 22;
    v4 = v3 & 0x300;
    if ( (v3 & 0x300) != 0 )
    {
        switch ( v4 )
        {
            case 256:
                a1 = -*(__int16 *)((char *)word_8006580 + ((2 * (255 - v3)) & 0x1FF));
                break;
            case 512:
                LOWORD(a1) = *(__int16 *)((char *)word_8006580 + ((2 * v3) & 0x1FF));
                v3 = 255 - v3;
                break;
            case 768:
                LOWORD(a1) = *(__int16 *)((char *)word_8006580 + ((2 * (255 - v3)) & 0x1FF));
                goto LABEL_9;
            default:
                goto LABEL_12;
        }
        LOWORD(a3) = *(__int16 *)((char *)word_8006580 + ((2 * v3) & 0x1FF));
        goto LABEL_12;
    }
    a1 = -*(__int16 *)((char *)word_8006580 + ((2 * v3) & 0x1FF));
    v3 = 255 - v3;
LABEL_9:
    a3 = -*(__int16 *)((char *)word_8006580 + ((2 * v3) & 0x1FF));
LABEL_12:
    word_2000048C = a3;
    word_2000048E = a1;
    LOWORD(v6) = (__int16)v7 * (__int16)a3 / 0x8000 - SHIWORD(v7) * (__int16)a1 / 0x8000;
    HIWORD(v6) = (__int16)v7 * (__int16)a1 / 0x8000 + SHIWORD(v7) * (__int16)a3 / 0x8000;
    return v6;
}
// 8006580: using guessed type __int16 word_8006580[256];
// 2000048C: using guessed type _WORD word_2000048C;
// 2000048E: using guessed type __int16 word_2000048E;

//----- (08006462) --------------------------------------------------------
int *sub_8006462()
{
    int v0; // r0
    int v1; // r2
    unsigned int v2; // r2
    int *result; // r0

    v0 = dword_200002A8;
    if ( dword_200002A8 != runtime_gear_mode_runtime_const_3 )
    {
        if ( (error_bits & 2) != 0 )
        {
            byte_2000029C = 2;
        }
        else if ( (unsigned __int8)byte_2000029C < 2u )
        {
            ++byte_2000029C;
LABEL_10:
            dword_200002A8 = v0;
            unk_200003E0 = -v0;
            dword_200003E8 = -16384 * v0;
            unk_200003E4 = v0;
            dword_200003EC = v0 << 14;
            unk_200003C8 = -v0;
            unk_200003CC = v0;
            unk_200003D0 = -16384 * v0;
            unk_200003D4 = v0 << 14;
            goto LABEL_11;
        }
        byte_2000029C = 0;
        if ( runtime_gear_mode_runtime_const_3 >= (unsigned int)dword_200002A8 )
        {
            v0 = dword_200002A8 + 1;
        }
        else
        {
            v0 = dword_200002A8 - 1;
        }
        unk_200002AC = v0 * v0;
        goto LABEL_10;
    }
LABEL_11:
    v1 = dword_2000046C * dword_2000046C + dword_20000470 * dword_20000470;
    if ( v1 >= 0 && unk_200002AC < (unsigned int)v1 )
    {
        v2 = (8
            * dword_200002A8
            * (unsigned int)*(unsigned __int16 *)(unk_200002A4
                                                + 2
                                                * (((dword_2000046C * dword_2000046C + dword_20000470 * dword_20000470) >> 24)
                                                 - unk_2000029E))) >> 16;
        dword_2000046C = (int)(dword_2000046C * v2) >> 15;
        dword_20000470 = (int)(dword_20000470 * v2) >> 15;
    }
    result = &dword_20000488;
    dword_20000488 = dword_2000046C;
    return result;
}
// 2000029C: using guessed type char byte_2000029C;
// 200002A8: using guessed type int dword_200002A8;
// 200003E8: using guessed type int dword_200003E8;
// 200003EC: using guessed type int dword_200003EC;
// 2000046C: using guessed type int dword_2000046C;
// 20000470: using guessed type int dword_20000470;
// 20000488: using guessed type int dword_20000488;

//----- (0800650A) --------------------------------------------------------
void __fastcall calc_some_factors(int *list, int factor_1, int factor_2)
{
    int v4; // r0

    v4 = factor_1 * word_2000048E / (int)-0x8000u + factor_2 * (__int16)word_2000048C / 0x8000;
    *list = factor_1 * (__int16)word_2000048C / 0x8000 + factor_2 * word_2000048E / 0x8000;
    list[1] = v4;
}
// 2000048C: using guessed type _WORD word_2000048C;
// 2000048E: using guessed type __int16 word_2000048E;

//----- (08006780) --------------------------------------------------------
void __cdecl some_selected_gear_mode_runtime_const_3()
{
    unsigned int v0; // r5
    int divived_from_runtime_config_type_2_def_8000_max_8800; // r0

    unk_200002A4 = unk_200002A0;
    unk_2000029E = 3;
    v0 = gear_mode_consts_3[(unsigned __int8)current_gear_mode_1];
    if ( runtime_gear_mode_runtime_const_3 >= 0x2001u )
    {
        divived_from_runtime_config_type_2_def_8000_max_8800 = get_divived_from_runtime_config_type_2_def_8000_max_8800();
        v0 = mb_divide(960 * v0, divived_from_runtime_config_type_2_def_8000_max_8800);
    }
    if ( v0 < 0x2000 )
    {
        v0 = 0x2000;
    }
    if ( (error_bits & (BIT_19|BIT_18|BIT_16)) == 0 )
    {
        runtime_gear_mode_runtime_const_3 = v0;
        if ( !main_loop_state || main_loop_state == 1 )
        {
            if ( main_loop_state && mb_some_speed() )
            {
                sub_80068CC();
            }
            else
            {
                dword_200002A8 = runtime_gear_mode_runtime_const_3;
                unk_200002AC = dword_200002A8 * dword_200002A8;
                unk_200003E0 = -runtime_gear_mode_runtime_const_3;
                unk_200003E4 = runtime_gear_mode_runtime_const_3;
                dword_200003E8 = -16384 * runtime_gear_mode_runtime_const_3;
                dword_200003EC = runtime_gear_mode_runtime_const_3 << 14;
                unk_200003C8 = -runtime_gear_mode_runtime_const_3;
                unk_200003CC = runtime_gear_mode_runtime_const_3;
                unk_200003D0 = -16384 * runtime_gear_mode_runtime_const_3;
                unk_200003D4 = runtime_gear_mode_runtime_const_3 << 14;
            }
        }
    }
}
// 8006954: using guessed type _DWORD gear_mode_consts_3[4];
// 200002A8: using guessed type int dword_200002A8;
// 200003E8: using guessed type int dword_200003E8;
// 200003EC: using guessed type int dword_200003EC;
// 200004B1: using guessed type char main_loop_state;

//----- (08006818) --------------------------------------------------------
__int16 *__fastcall sub_8006818(int a1)
{
    __int16 *result; // r0
    int divived_from_runtime_config_type_2_def_8000_max_8800; // r0

    if ( a1 == 1 )
    {
        dword_200002A8 = runtime_gear_mode_runtime_const_3;
        unk_200002AC = dword_200002A8 * dword_200002A8;
        if ( word_20000204 < 1 )
        {
            unk_200003E4 = 0;
            dword_200003EC = 0;
            unk_200003E0 = -runtime_gear_mode_runtime_const_3;
            dword_200003E8 = -16384 * runtime_gear_mode_runtime_const_3;
        }
        else
        {
            unk_200003E0 = 0;
            dword_200003E8 = 0;
            unk_200003E4 = runtime_gear_mode_runtime_const_3;
            dword_200003EC = runtime_gear_mode_runtime_const_3 << 14;
        }
        result = &word_200003C4;
        unk_200003C8 = -runtime_gear_mode_runtime_const_3;
        unk_200003CC = runtime_gear_mode_runtime_const_3;
        unk_200003D0 = -16384 * runtime_gear_mode_runtime_const_3;
        unk_200003D4 = runtime_gear_mode_runtime_const_3 << 14;
    }
    else
    {
        runtime_gear_mode_runtime_const_3 = gear_mode_consts_3[(unsigned __int8)current_gear_mode_1];
        if ( runtime_gear_mode_runtime_const_3 >= 0x2001u )
        {
            divived_from_runtime_config_type_2_def_8000_max_8800 = get_divived_from_runtime_config_type_2_def_8000_max_8800();
            runtime_gear_mode_runtime_const_3 = mb_divide(
                                                    960 * runtime_gear_mode_runtime_const_3,
                                                    divived_from_runtime_config_type_2_def_8000_max_8800);
        }
        if ( runtime_gear_mode_runtime_const_3 < 0x2000u )
        {
            runtime_gear_mode_runtime_const_3 = 0x2000;
        }
        if ( mb_some_speed() )
        {
            return (__int16 *)sub_80068CC();
        }
        else
        {
            dword_200002A8 = runtime_gear_mode_runtime_const_3;
            unk_200002AC = dword_200002A8 * dword_200002A8;
            unk_200003E4 = runtime_gear_mode_runtime_const_3;
            dword_200003EC = runtime_gear_mode_runtime_const_3 << 14;
            unk_200003E0 = -runtime_gear_mode_runtime_const_3;
            dword_200003E8 = -16384 * runtime_gear_mode_runtime_const_3;
            result = &word_200003C4;
            unk_200003C8 = -runtime_gear_mode_runtime_const_3;
            unk_200003CC = runtime_gear_mode_runtime_const_3;
            unk_200003D0 = -16384 * runtime_gear_mode_runtime_const_3;
            unk_200003D4 = runtime_gear_mode_runtime_const_3 << 14;
        }
    }
    return result;
}
// 8006954: using guessed type _DWORD gear_mode_consts_3[4];
// 20000204: using guessed type __int16 word_20000204;
// 200002A8: using guessed type int dword_200002A8;
// 200003C4: using guessed type __int16 word_200003C4;
// 200003E8: using guessed type int dword_200003E8;
// 200003EC: using guessed type int dword_200003EC;

//----- (080068CC) --------------------------------------------------------
char *sub_80068CC()
{
    char *result; // r0
    int v1; // r1

    result = &byte_2000029C;
    v1 = dword_200002A8;
    if ( dword_200002A8 != runtime_gear_mode_runtime_const_3 )
    {
        if ( (error_bits & 2) != 0 || (unsigned __int8)byte_2000029C >= 2u )
        {
            byte_2000029C = 0;
            if ( runtime_gear_mode_runtime_const_3 >= (unsigned int)dword_200002A8 )
            {
                v1 = dword_200002A8 + 1;
            }
            else
            {
                v1 = dword_200002A8 - 1;
            }
            unk_200002AC = v1 * v1;
        }
        else
        {
            ++byte_2000029C;
        }
        dword_200002A8 = v1;
        result = (char *)v1;
        unk_200003E0 = -v1;
        dword_200003E8 = -16384 * v1;
        unk_200003E4 = v1;
        dword_200003EC = v1 << 14;
        unk_200003C8 = -v1;
        unk_200003CC = v1;
        unk_200003D0 = -16384 * v1;
        unk_200003D4 = v1 << 14;
    }
    return result;
}
// 2000029C: using guessed type char byte_2000029C;
// 200002A8: using guessed type int dword_200002A8;
// 200003E8: using guessed type int dword_200003E8;
// 200003EC: using guessed type int dword_200003EC;

//----- (08006928) --------------------------------------------------------
void __cdecl set_error_runtime_gear_mode_runtime_const_3()
{
    runtime_gear_mode_runtime_const_3 = 0x2000;
}

//----- (08006964) --------------------------------------------------------
void __fastcall set_IWDG_KR(int result)
{
    IWDG_KR = result;
}
// 40003000: using guessed type int IWDG_KR;

//----- (0800696A) --------------------------------------------------------
int __fastcall sub_800696A(int result)
{
    IWDG_PR = result;
    return result;
}
// 40003004: using guessed type int IWDG_PR;

//----- (08006970) --------------------------------------------------------
int __fastcall sub_8006970(int result)
{
    IWDG_RLR = result;
    return result;
}
// 40003008: using guessed type int IWDG_RLR;

//----- (08006976) --------------------------------------------------------
void __cdecl ping_wdt()
{
    IWDG_KR = 0xAAAA;
}
// 40003000: using guessed type int IWDG_KR;

//----- (0800697E) --------------------------------------------------------
void __cdecl start_wdt()
{
    IWDG_KR = 0xCCCC;
}
// 40003000: using guessed type int IWDG_KR;

//----- (0800699C) --------------------------------------------------------
int *unlock_flash_0()
{
    int *result; // r0
    char v1; // r1

    result = &Flash_KEYR;
    v1 = Flash_CR;
    if ( (v1 & 0x80) != 0 )
    {
        Flash_KEYR = 0x45670123;
        Flash_KEYR = 0xCDEF89AB;
    }
    return result;
}
// 40022004: using guessed type int Flash_KEYR;
// 40022010: using guessed type int Flash_CR;

//----- (080069AE) --------------------------------------------------------
void __cdecl lock_flash_0()
{
    int v0; // r1

    v0 = Flash_CR;
    Flash_CR = v0 | 0x80;
}
// 40022010: using guessed type int Flash_CR;

//----- (080069BA) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
int __fastcall flash_erase_page_0(int page_ptr)
{
    int result; // r0
    int v3; // r0
    unsigned int v4; // r1

    result = mb_wait_for_flash_ready_0(720896);
    if ( result == 4 )
    {
        v3 = Flash_CR;
        Flash_CR = v3 | 2;
        Flash_AR = page_ptr;
        Flash_CR = v3 | 0x42;
        result = mb_wait_for_flash_ready_0(720896);
        v4 = Flash_CR & 0xFFFFFFFD;
        Flash_CR = v4;
    }
    return result;
}
// 80069C0: positive sp value 84 has been found
// 40022010: using guessed type int Flash_CR;
// 40022014: using guessed type int Flash_AR;

//----- (080069F0) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
int __fastcall flash_write_word(_WORD *flash_ptr, __int16 data)
{
    int result; // r0
    int v5; // r0
    unsigned int v6; // r1

    result = mb_wait_for_flash_ready_0(0xB0000);
    if ( result == 4 )
    {
        v5 = Flash_CR;
        Flash_CR = v5 | 1;
        *flash_ptr = data;
        result = mb_wait_for_flash_ready_0(0xB0000);
        v6 = Flash_CR & 0xFFFFFFFE;
        Flash_CR = v6;
    }
    return result;
}
// 80069F8: positive sp value 7C has been found
// 40022010: using guessed type int Flash_CR;

//----- (08006A34) --------------------------------------------------------
int __fastcall mb_wait_for_flash_ready_0(int a1)
{
    int result; // r0
    char v3; // r5

    result = 4;
    v3 = Flash_SR;
    if ( (v3 & 1) != 0 )
    {
        result = 1;
    }
    else if ( (Flash_SR & 0x10) != 0 )
    {
        result = 2;
    }
    else if ( (Flash_SR & 4) != 0 )
    {
        result = 3;
    }
    while ( result == 1 )
    {
        if ( !a1 )
        {
            return 5;
        }
        result = 4;
        if ( (Flash_SR & 1) != 0 )
        {
            result = 1;
        }
        else if ( (Flash_SR & 0x10) != 0 )
        {
            result = 2;
        }
        else if ( (Flash_SR & 4) != 0 )
        {
            result = 3;
        }
        --a1;
    }
    if ( a1 )
    {
        return result;
    }
    return 5;
}
// 4002200C: using guessed type int Flash_SR;

//----- (08006ADC) --------------------------------------------------------
_DWORD *__fastcall sub_8006ADC(_DWORD *result, unsigned int a2)
{
    bool v2; // cf
    unsigned int i; // r1
    int v4; // r1
    bool v5; // nf
    int v6; // r1

    if ( a2 )
    {
        while ( (_DWORD)result << 30 )
        {
            *(_BYTE *)result = 0;
            result = (_DWORD *)((char *)result + 1);
            if ( !--a2 )
            {
                return result;
            }
        }
        v2 = a2 >= 0x10;
        for ( i = a2 - 16; v2; result += 4 )
        {
            v2 = i >= 0x10;
            i -= 16;
            *result = 0;
            result[1] = 0;
            result[2] = 0;
            result[3] = 0;
        }
        v2 = __CFSHL__(i, 29);
        v4 = i << 29;
        if ( v2 )
        {
            *result = 0;
            result[1] = 0;
            result += 2;
        }
        if ( v4 < 0 )
        {
            *result++ = 0;
        }
        v2 = __CFSHL__(v4, 2);
        v6 = 4 * v4;
        v5 = v6 < 0;
        if ( v2 )
        {
            *(_WORD *)result = 0;
            result = (_DWORD *)((char *)result + 2);
            v5 = v6 < 0;
        }
        if ( v5 )
        {
            *(_BYTE *)result = 0;
        }
    }
    return result;
}

//----- (08006AE0) --------------------------------------------------------
void __fastcall memzero(_DWORD *dst, unsigned int size)
{
    bool v2; // cf
    unsigned int i; // r1
    int v4; // r1
    bool v5; // nf
    int v6; // r1

    v2 = size >= 0x10;
    for ( i = size - 16; v2; dst += 4 )
    {
        v2 = i >= 0x10;
        i -= 16;
        *dst = 0;
        dst[1] = 0;
        dst[2] = 0;
        dst[3] = 0;
    }
    v2 = __CFSHL__(i, 29);
    v4 = i << 29;
    if ( v2 )
    {
        *dst = 0;
        dst[1] = 0;
        dst += 2;
    }
    if ( v4 < 0 )
    {
        *dst++ = 0;
    }
    v2 = __CFSHL__(v4, 2);
    v6 = 4 * v4;
    v5 = v6 < 0;
    if ( v2 )
    {
        *(_WORD *)dst = 0;
        dst = (_DWORD *)((char *)dst + 2);
        v5 = v6 < 0;
    }
    if ( v5 )
    {
        *(_BYTE *)dst = 0;
    }
}

//----- (08006AE4) --------------------------------------------------------
void __cdecl mb_setup_systick()
{
    int v0; // r2

    STK_RVR = 23999;
    v0 = SCB_SHPR3;
    SCB_SHPR3 = v0 & 0xFFFFFF | 0xC0000000;
    STK_CVR = 0;
    STK_CSR = 7;
}
// E000E010: using guessed type int STK_CSR;
// E000E014: using guessed type int STK_RVR;
// E000E018: using guessed type int STK_CVR;
// E000ED20: using guessed type int SCB_SHPR3;

//----- (08006B04) --------------------------------------------------------
void __fastcall set_count_down_timer_7(__int16 result)
{
    count_down_timer_7 = result;
}

//----- (08006B0A) --------------------------------------------------------
BOOL is_count_down_timer_7_zero()
{
    return count_down_timer_7 == 0;
}
// 200002C8: using guessed type __int16 count_down_timer_7;

//----- (08006B1A) --------------------------------------------------------
void __fastcall set_count_down_timer_3(__int16 result)
{
    count_down_timer_3 = result;
}
// 200002CA: using guessed type __int16 count_down_timer_3;

//----- (08006B20) --------------------------------------------------------
BOOL is_count_down_timer_3_zero()
{
    return count_down_timer_3 == 0;
}

//----- (08006B30) --------------------------------------------------------
void __fastcall set_count_down_timer_2(char result)
{
    count_down_timer_2 = result;
}

//----- (08006B36) --------------------------------------------------------
BOOL is_count_down_timer_2_zero()
{
    return count_down_timer_2 == 0;
}

//----- (08006B46) --------------------------------------------------------
bool __cdecl is_count_down_timer_4_zero()
{
    if ( count_down_timer_4 )
    {
        return 0;
    }
    count_down_timer_4 = 2;
    return 1;
}

//----- (08006B5A) --------------------------------------------------------
int count_down_timer_5_timed_out_100_ms()
{
    if ( count_down_timer_5 )
    {
        return 0;
    }
    count_down_timer_5 = 100;
    return 1;
}

//----- (08006B6E) --------------------------------------------------------
int count_down_timer_6_timed_out_1000_ms()
{
    if ( count_down_timer_6 )
    {
        return 0;
    }
    count_down_timer_6 = 1000;
    return 1;
}
// 200002CE: using guessed type __int16 count_down_timer_6;

//----- (08006B84) --------------------------------------------------------
void __cdecl SysTick()
{
    if ( count_down_timer_1 )
    {
        --count_down_timer_1;
    }
    if ( count_down_timer_2 )
    {
        --count_down_timer_2;
    }
    if ( count_down_timer_3 )
    {
        --count_down_timer_3;
    }
    if ( count_down_timer_4 )
    {
        --count_down_timer_4;
    }
    if ( count_down_timer_5 )
    {
        --count_down_timer_5;
    }
    if ( count_down_timer_6 )
    {
        --count_down_timer_6;
    }
    if ( count_down_timer_7 )
    {
        --count_down_timer_7;
    }
    if ( count_down_timer_8 )
    {
        --count_down_timer_8;
    }
    else
    {
        count_down_timer_8 = 1;
        if ( (error_bits & 0x400000) != 0 )
        {
            if ( (error_bits & 0x100000) != 0 )
            {
                sub_8005582();
            }
            else if ( main_loop_state == 8 || main_loop_state == 9 || main_loop_state == 15 || main_loop_state == 5 )
            {
                sub_80055D0();
            }
        }
    }
}
// 200002C4: using guessed type char count_down_timer_8;
// 200002C8: using guessed type __int16 count_down_timer_7;
// 200002CA: using guessed type __int16 count_down_timer_3;
// 200002CC: using guessed type __int16 count_down_timer_1;
// 200002CE: using guessed type __int16 count_down_timer_6;
// 200004B1: using guessed type char mb_global_main_state;

//----- (08006C34) --------------------------------------------------------
int __fastcall mb_usart_setup(unsigned int *a1, usart_struct *a2)
{
    unsigned int v4; // r0
    int baud; // r1
    unsigned int v6; // r0
    unsigned int v7; // r1
    int v8; // r7
    unsigned int v9; // r0
    unsigned int v10; // r1
    __int16 v11; // r6
    int result; // r0
    __int16 v13; // r1
    unsigned int v14[12]; // [sp+0h] [bp-30h] BYREF

    *a1 &= ~1u;
    a1[1] = a2->field_8 | a1[1] & 0xFFFFCFFF;
    *a1 = a2->is_12 | a2->field_C | a2->field_4 | *a1 & 0xFFFFE9F3;
    a1[2] = a2->field_14 | a1[2] & 0xFFFFFCFF;
    some_struct_fill(v14);
    if ( a1 == &USART1_CR1 )
    {
        v4 = v14[6];
    }
    else
    {
        v4 = v14[2];
    }
    baud = a2->baud;
    v6 = 25 * v4;
    if ( (*a1 & 0x8000) != 0 )
    {
        v7 = 2 * baud;
    }
    else
    {
        v7 = 4 * baud;
    }
    v8 = mb_divide(v6, v7);
    v9 = 16 * mb_divide(v8, 0x64u);
    v10 = v8 - 100 * (v9 >> 4);
    v11 = v9;
    if ( (*a1 & 0x8000) != 0 )
    {
        result = mb_divide(8 * v10 + 50, 0x64u);
        v13 = result & 7;
    }
    else
    {
        result = mb_divide(16 * v10 + 50, 0x64u);
        v13 = result & 0xF;
    }
    *((_WORD *)a1 + 6) = v13 | v11;
    return result;
}

//----- (08006CDE) --------------------------------------------------------
int *__fastcall mb_bit_set_or_clear(int *result, int a2)
{
    bool v2; // zf
    int v3; // r1

    v2 = a2 == 0;
    v3 = *result;
    if ( v2 )
    {
        *result = v3 & 0xFFFFFFFE;
    }
    else
    {
        *result = v3 | 1;
    }
    return result;
}

//----- (08006CF4) --------------------------------------------------------
// local variable allocation has failed, the output may be wrong!
void __fastcall tx_byte_0(int result, unsigned __int8 a2)
{
    // (USART_TDR)
    *(_WORD *)(result + 40) = a2 & 0x1FF;
}
// 8006CF4: variables would overlap: r1.1 and r1.2

//----- (08006CFC) --------------------------------------------------------
int __fastcall rx_9_bits(int usart_base)
{
    // USART_RDR
    return *(_WORD *)(usart_base + 0x24) & 0x1FF;
}

//----- (08006D14) --------------------------------------------------------
BOOL __fastcall is_tx40_or_rx20_status_0(int a1, int a2)
{
    return (a2 & *(_DWORD *)(a1 + 0x1C)) != 0;
}

//----- (08006D22) --------------------------------------------------------
void __fastcall set_USART_ICR_bit(int usart_base, int a2)
{
    *(_DWORD *)(usart_base + 0x20) = 1 << SBYTE2(a2);
}

//----- (08006D2C) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __cdecl __noreturn controller_main_loop()
{
    unsigned int i; // r0
    BOOL is_reset_by_software; // r0
    ERROR_BITS_ENUM _error_bits; // r0
    int v3; // r1
    bool v4; // zf
    int speed; // r0
    ERROR_BITS_ENUM v6; // r0
    int v7; // r1
    ERROR_BITS_ENUM v8; // r0
    char v9; // r2
    ERROR_BITS_ENUM v10; // r0
    char v11; // r0
    char *v12; // r0
    char v13; // r1
    int v14; // r0
    bool v15; // zf
    __int16 v16; // r0

    // Copy interrupt vector table
    for ( i = 0; i < 48; ++i )
    {
        *(_DWORD *)&ram_start_and_xtea_crypto_key[4 * i] = controller_main_ivt[i];
    }
    RCC_APB2ENR_clear_or_set(1, 1);
    update_SYSCFG_CFGR2_0();
    init_ports();
    mb_setup_clock();
    is_reset_by_software = was_reset_by_software_reason(0x5Cu);
    unk_200002D1 = is_reset_by_software;
    if ( is_reset_by_software )
    {
        // Probably abnormal software reset.
        sub_80028AC();
        sub_8007566();
    }
    else
    {
        // Probably normal reset
        init_selected_gear_mode();
    }
    setup_wdt();
    if ( !validate_device_id() )
    {
        // LED on and HALT´
        while ( 1 )
        {
            set_GPIO_pin(&GPIO_B, 4);
        }
    }
    set_GPIO_pin(&GPIO_B, 4);
    mb_setup_systick();
    set_count_down_timer_7(200);
    while ( !is_count_down_timer_7_zero() )
    {
        ;
    }
    // Turn LED off
    reset_GPIO_pin(&GPIO_B, 4);
    set_count_down_timer_7(1000);
    while ( !is_count_down_timer_7_zero() )
    {
        update_auto_calibrate_adc_4_5_6_8();
    }
    init_hw_and_read_configs();

    // It seems like field 10 & 11 will always be set to 0
    init_HALL_configuration_and_UVW_settings(1);
    sub_8003728();
    set_count_down_timer_7(400);
    while ( !is_count_down_timer_7_zero() )
    {
        ;
    }
    hmm_two_same_kind_lists_sub_8006124((int)&word_200003DC, (int)&word_200003C4);
    mb_init_max_amp();
    sub_800564C();
    init_some_temp_and_batt_values();
    sub_8005A70();
    set_count_down_uart_poll_timer_3(10);
    update_selected_gear_mode();
    start_wdt();
    is_wdt_enabled = 1;
    while ( 1 )
    {
        if ( is_count_down_timer_2_zero() )
        {
            set_count_down_timer_2(1);
            sub_8003018();
        }
        if ( is_count_down_timer_4_zero() )
        {
            ++unk_200002D3;
            if ( unk_200002D3 >= 0x64u )
            {
                unk_200002D3 = 0;
                sub_8004510();
            }
            if ( RS485.from_rx_buffer_5_type_8_4 < (unsigned int)RS485.from_rx_buffer_6_type_8_4 )
            {
                RS485.from_rx_buffer_5_type_8_4 = RS485.from_rx_buffer_6_type_8_4;
            }
            if ( RS485.from_rx_buffer_5_type_8_4 < (unsigned int)RS485.from_rx_buffer_7_type_8_4 )
            {
                RS485.from_rx_buffer_5_type_8_4 = RS485.from_rx_buffer_7_type_8_4;
            }
            if ( RS485.from_rx_buffer_5_type_8_4 < (unsigned int)RS485.from_rx_buffer_8_type_8_4 )
            {
                RS485.from_rx_buffer_5_type_8_4 = RS485.from_rx_buffer_8_type_8_4;
            }
            word_200002D6 = RS485.from_rx_buffer_5_type_8_4;
            unk_200002D8 = RS485.from_rx_buffer_5_type_8_4;
            if ( RS485.from_rx_buffer_5_type_8_4 < 60u )
            {
                if ( RS485.from_rx_buffer_5_type_8_4 < 55u )
                {
                    use_limit_17_35_for_1_or_17_20 = 0;
                    mb_max_amp = 3600;
                }
            }
            else
            {
                use_limit_17_35_for_1_or_17_20 = 1;
            }
            update_counter_1();
            rx_buffer_command_handler();
            update_error_bits_bit_1_is_set();

            // Send serial data on PB11
            // 1000 symbols / sec
            // 100 = 0
            // 101 = 1
            if ( PB11_serial_get_next_bit() == 1 )
            {
                // PB11 bit banging HIGH
                set_GPIO_pin(&GPIO_B, BIT_11);
            }
            else
            {
                // PB11 bit banging LOW
                reset_GPIO_pin(&GPIO_B, BIT_11);
            }
        }
        count_down_timer_5_timed_out_100_ms();
        if ( count_down_timer_6_timed_out_1000_ms() == 1 )
        {
            PB11_build_serial_package();
        }
        mb_some_speed();
        mb_some_speed();
        if ( is_count_down_uart_poll_timer_3_zero() )
        {
            set_count_down_uart_poll_timer_3(10);
            usart_enable();
            sub_8005ACE();
            somthing_with_break_and_not_break();
            some_mode_or_gear_handling_1();
            sub_800500C();
            if ( (error_bits & (BIT_25|BIT_17)) == 0 )
            {
                check_for_secret_profile_change();
            }
            if ( (error_bits & BIT_25) == 0 )
            {
                some_mode_switch_handling_2();
            }
            sub_8006074();
            poll_PC15_CAN_H_PIN15();
            sub_80049D0();
            sub_8004A8C();
            set_is_over_volt_error_bits();
            if ( (error_bits & BIT_16) != 0 && seems_bad() == 1 )
            {
                set_error_bit(BIT_15);
            }
            sub_800222C();
            blink_error_codes_on_PB2_led();
            if ( (error_bits & UNDER_VOLT) != 0 && !mb_is_over_under_volt() )
            {
                error_bits &= ~BIT_11;
                reset_GPIO_pin(&GPIO_B, 4);
            }
            if ( (error_bits & OVER_VOLT_1) != 0 && !mb_is_over_under_volt() )
            {
                error_bits &= ~BIT_10;
                reset_GPIO_pin(&GPIO_B, BIT_2);
                if ( !(error_bits << 16) && main_loop_state == 14 )
                {
                    main_loop_state = 1;
                }
            }
            if ( (main_loop_state == 3 || main_loop_state == 4 || main_loop_state == 15) && !(error_bits << 16) )
            {
                if ( stru_20000130.field_B )
                {
                    if ( !byte_200002D0 )
                    {
                        unk_200002D4 = word_20000318;
                        byte_200002D0 = 1;
                    }
                    word_20000318 = 4500;
                }
                else if ( byte_200002D0 == 1 )
                {
                    word_20000318 = unk_200002D4;
                    byte_200002D0 = 0;
                }
            }
            ping_wdt();
        }
        if ( usart_is_initialized )
        {
            ((void (__cdecl *)())rx_byte_0)();
        }
        else
        {
            nullsub_2();
        }
        poll_tx_buffer();
        v4 = main_loop_state == 1;
        switch ( main_loop_state )
        {
            case 1:
                if ( config_updated == 1 )
                {
                    config_updated = 0;
                    if ( config_type_2_updated == 1 )
                    {
                        copy_config_type_2_to_flash();
                        config_type_2_updated = 0;
                    }
                    else
                    {
                        copy_config_type_1_to_flash();
                    }
                    __dsb(0xFu);
                    SCB_AIRCR = 0x5FA0004;
                    __dsb(0xFu);
                    // Wait until WDT reboot i guess ?
                    while ( 1 )
                    {
                        ;
                    }
                }
                _error_bits = error_bits;
                goto LABEL_16;
            case 2:
                // Turn off LED
                reset_GPIO_pin(&GPIO_B, BIT_2);
                mb_init_stuff();
                v4 = (unsigned __int16)(error_bits & ~BIT_11) == 0;
                goto LABEL_77;
            case 3:
                if ( sub_8003928() && (error_bits & 0x40000) == 0 )
                {
                    set_error_bit(8);
                }
                v8 = error_bits << 15;
                if ( (error_bits & BIT_16) == 0 )
                {
                    continue;
                }
                if ( (error_bits & 0x4000000) == 0 )
                {
                    v8 = (unsigned __int16)mb_some_speed();
                }
                v9 = byte_200001F4;
                if ( v8 >= 0 )
                {
                    if ( v8 < SELF_CHECK_FAILED || word_20000204 >= 0 )
                    {
                        goto LABEL_102;
                    }
                }
                else
                {
                    v8 = -v8;
                    if ( word_20000204 < 1 )
                    {
                        goto LABEL_102;
                    }
                }
                v9 = 1;
LABEL_102:
                byte_200001F4 = v9;
                if ( (__int16)v8 < (MOTOR_STALL|MB_PHASE_DISCONNECTED) || byte_200001F4 == 1 )
                {
                    main_loop_state = 8;
                    error_bits &= ~IS_RUNNING;
                    word_200004A8[0] = word_2000031E;
                    sub_8006274();
                    v6 = error_bits;
                    v7 = ~BIT_16;
                    goto LABEL_89;
                }
                continue;
            case 4:
                if ( sub_8003928() && (error_bits & 0x40000) == 0 )
                {
                    set_error_bit(8);
                }
                v10 = error_bits << 15;
                if ( (error_bits & 0x10000) == 0 )
                {
                    goto LABEL_116;
                }
                if ( (error_bits & 0x4000000) == 0 )
                {
                    v10 = (unsigned __int16)mb_some_speed();
                }
                if ( v10 >= 0 )
                {
                    if ( v10 < SELF_CHECK_FAILED || word_20000204 >= 0 )
                    {
LABEL_113:
                        if ( (__int16)v10 >= (MOTOR_STALL|MB_PHASE_DISCONNECTED) && byte_200001F4 != 1 )
                        {
                            goto LABEL_116;
                        }
                        goto LABEL_115;
                    }
                }
                else
                {
                    v10 = -v10;
                    if ( word_20000204 < 1 )
                    {
                        goto LABEL_113;
                    }
                }
                byte_200001F4 = 1;
LABEL_115:
                main_loop_state = 8;
                error_bits &= ~IS_RUNNING;
                word_200004A8[0] = word_2000031E;
                sub_8006274();
                error_bits &= ~BIT_16;
LABEL_116:
                if ( sub_80044E2() == 1 )
                {
                    sub_80037D8();
                    sub_80044D0();
                    sub_80044C8();
                    if ( word_200001FE )
                    {
                        v11 = 3;
LABEL_119:
                        main_loop_state = v11;
                    }
                }
                continue;
            case 5:
                if ( sub_80044E2() != 1 || byte_200004B6 != 4 )
                {
                    continue;
                }
                v12 = &byte_200004B6;
                v13 = 3;
                goto LABEL_127;
            case 6:
                stop_or_start_timer((int)&TIM1_CR1, 0);
                main_loop_state = 7;
                set_tim1_ccr1_ccr2_ccr3(0);
                hmm_dword_20000474[1] = 0;
                hmm_dword_20000474[0] = 0;
                sub_80019E4(0, 0);
                if ( (error_bits & 0x80000) != 0 )
                {
                    v16 = 2;
                }
                else
                {
                    v16 = 200;
                }
                set_count_down_timer_7(v16);
                continue;
            case 7:
                if ( !is_count_down_timer_7_zero() )
                {
                    continue;
                }
                if ( (error_bits & MB_PHASE_DISCONNECTED) != 0 )
                {
                    v11 = 14;
                }
                else
                {
                    v11 = 1;
                }
                goto LABEL_119;
            case 8:
                error_bits &= ~IS_RUNNING;
                v14 = sub_8003860();
                if ( v14 >= 0 )
                {
                    if ( v14 >= 1 && word_20000204 < 0 )
                    {
                        goto LABEL_131;
                    }
                }
                else if ( word_20000204 >= 1 )
                {
LABEL_131:
                    v12 = &byte_200001F4;
                    v13 = 1;
LABEL_127:
                    *v12 = v13;
                }
                break;
            case 9:
                error_bits &= ~IS_RUNNING;
                goto LABEL_141;
            case 10:
            case 11:
            case 12:
            case 14:
                continue;
            case 13:
            case 16:
LABEL_141:
                v15 = is_count_down_timer_7_zero();
                goto LABEL_136;
            case 15:
                error_bits &= ~IS_RUNNING;
                sub_8003214();
                continue;
            case 17:
                v15 = sub_8003860() == 0;
LABEL_136:
                if ( v15 )
                {
                    main_loop_state = 6;
                }
                continue;
            default:
LABEL_77:
                if ( !v4 )
                {
                    continue;
                }
                if ( (error_bits & 0x80000) != 0 )
                {
                    if ( (error_bits & BIT_16) == 0 )
                    {
                        main_loop_state = 15;
                        v6 = error_bits;
                        v7 = ~IS_RUNNING;
LABEL_89:
                        v3 = v7 & v6;
                        goto LABEL_17;
                    }
                    main_loop_state = 4;
                }
                else
                {
                    speed = mb_get_speed();
                    if ( speed < 0 )
                    {
                        speed = -speed;
                    }
                    if ( (__int16)speed < 83 )
                    {
                        main_loop_state = 3;
                    }
                    else
                    {
                        main_loop_state = 4;
                        sub_80044C8();
                    }
                }
                _error_bits = error_bits;
LABEL_16:
                v3 = _error_bits | IS_RUNNING;
LABEL_17:
                error_bits = v3;
                continue;
        }
    }
}
// 8006D84: positive sp value 108 has been found
// 8001000: using guessed type int controller_main_ivt[];
// 20000130: using guessed type struc_20000130 stru_20000130;
// 200001F4: using guessed type char byte_200001F4;
// 200001FE: using guessed type unsigned __int16 word_200001FE;
// 20000204: using guessed type __int16 word_20000204;
// 20000244: using guessed type struc_20000244 RS485;
// 200002D0: using guessed type char byte_200002D0;
// 200002D2: using guessed type char use_limit_17_35_for_1_or_17_20;
// 200002D6: using guessed type __int16 word_200002D6;
// 20000318: using guessed type __int16 word_20000318;
// 2000031E: using guessed type __int16 word_2000031E;
// 200003C4: using guessed type __int16 word_200003C4;
// 200003DC: using guessed type __int16 word_200003DC;
// 2000042E: using guessed type __int16 mb_max_amp;
// 20000474: using guessed type int hmm_dword_20000474[2];
// 200004A8: using guessed type _WORD word_200004A8[3];
// 200004B0: using guessed type char usart_is_initialized;
// 200004B1: using guessed type char main_loop_state;
// 200004B3: using guessed type char is_wdt_enabled;
// 200004B6: using guessed type char byte_200004B6;
// 200004B8: using guessed type char config_type_2_updated;
// 200004B9: using guessed type char config_updated;
// 40012C00: using guessed type int TIM1_CR1;
// E000ED0C: using guessed type int SCB_AIRCR;

//----- (080072EC) --------------------------------------------------------
void __cdecl init_ports()
{
    int v0; // r1
    struc_20000A30 v1; // [sp+0h] [bp-20h] BYREF

    sub_80033D6(0x4E0000, 1);
    v0 = RCC_AHBRSTR;
    RCC_AHBRSTR = v0 | 0x460000;
    RCC_AHBRSTR = v0 & 0xFFB9FFFF;
    LOWORD(GPIO_A.BRR) = 0x700;
    init_struc_20000A30(&v1);
    v1.bits = 0x700;
    v1.type = 1;
    v1.speed = 1;
    v1.pullup_type = 0;
    init_port(&GPIO_A, &v1);
    GPIO_B.BSRR = 0xE000;
    v1.bits = 0xE000;
    init_port(&GPIO_B, &v1);
    reset_GPIO_pin(&GPIO_B, 4);
    v1.bits = 4;
    init_port(&GPIO_B, &v1);
    set_GPIO_pin(&GPIO_B, 0x800);
    v1.bits = 0x800;
    init_port(&GPIO_B, &v1);
    reset_GPIO_pin(&GPIO_B, 0x40);
    v1.bits = 0x40;
    v1.type = 1;
    v1.speed = 2;
    v1.pullup_type = 1;
    init_port(&GPIO_B, &v1);
    v1.bits = 2048;
    v1.type = 0;
    HIBYTE(v1.pullup_type) = 0;
    init_port(&GPIO_A, &v1);
    v1.bits = 0x8000;
    HIBYTE(v1.pullup_type) = 1;
    init_port(&GPIO_C, &v1);
    // Seems like PF0 = input, pull up
    v1.bits = 1;
    HIBYTE(v1.pullup_type) = 1;
    init_port(&GPIO_F, &v1);
    v1.bits = 0x40;
    HIBYTE(v1.pullup_type) = 1;
    init_port(&GPIO_F, &v1);
    v1.bits = 0x1000;
    HIBYTE(v1.pullup_type) = 1;
    init_port(&GPIO_A, &v1);
    v1.bits = 512;
    HIBYTE(v1.pullup_type) = 1;
    init_port(&GPIO_B, &v1);
    v1.bits = 0x4000;
    HIBYTE(v1.pullup_type) = 1;
    init_port(&GPIO_C, &v1);
    reset_GPIO_pin(&GPIO_F, 64);
    v1.bits = 64;
    v1.type = 1;
    v1.speed = 2;
    v1.pullup_type = 0;
    init_port(&GPIO_F, &v1);
}
// 40021028: using guessed type int RCC_AHBRSTR;
// 48000000: using guessed type GPIO_PORT_STRUCT GPIO_A;
// 80072EC: using guessed type struc_20000A30 var_20;

//----- (08007412) --------------------------------------------------------
void __cdecl setup_wdt()
{
    set_IWDG_KR(0x5555);
    sub_800696A(3);
    sub_8006970(127);
}

//----- (08007438) --------------------------------------------------------
bool __cdecl validate_device_id()
{
    bool result; // r0
    int i; // r2
    int id_byte; // r4

    result = 1;
    for ( i = 0; i < 12; ++i )
    {
        id_byte = DEVICE_ID[i];
        device_id[i] = id_byte;
        if ( (unsigned __int8)(byte_8000108[i + 100] + 0x55) != id_byte )
        {
            result = 0;
        }
    }
    return result;
}
// 8000108: using guessed type _BYTE byte_8000108[236];
// 20000448: using guessed type _BYTE device_id[12];

//----- (08007494) --------------------------------------------------------
void __fastcall mb_setup_clock()
{
    char rec_2[4]; // [sp+0h] [bp-18h] BYREF
    int rec_1_0; // [sp+4h] [bp-14h] BYREF
    char rec_1_1[4]; // [sp+8h] [bp-10h]

    sub_80033FE(0x10000000, 1);
    RCC_APB2ENR_clear_or_set(1, 1);
    sub_8007584();
    sub_800759C(224);
    setup_power_mode(1);
    update_SYSCFG_CFGR2(4);
    set_EXTI_PR(0x10000);
    rec_1_0 = 0x10000;
    rec_1_1[0] = 0;
    rec_1_1[1] = 8;
    rec_1_1[2] = 1;
    sub_80075C8(&rec_1_0);
    rec_2[0] = 1;
    rec_2[1] = 0;
    rec_2[2] = 1;
    init_NVIC((unsigned __int8 *)rec_2);
}
// 8007494: using guessed type unsigned __int8 rec_2[4];

//----- (080074E8) --------------------------------------------------------
void update_SYSCFG_CFGR2_0()
{
    JUMPOUT(0x80074F8);
}
// 80074F0: control flows out of bounds to 80074F8

//----- (080074F2) --------------------------------------------------------
void __fastcall update_SYSCFG_CFGR2(int a1)
{
    int v1; // r2

    v1 = SYSCFG_CFGR2;
    SYSCFG_CFGR2 = a1 | v1;
}
// 40010018: using guessed type int SYSCFG_CFGR2;

//----- (08007508) --------------------------------------------------------
void __fastcall usart_enable()
{
    unsigned int v0; // r1

    if ( !unk_20000469 )
    {
        if ( unk_20000468 )
        {
            if ( unk_20000468 >= 32u )
            {
                if ( unk_20000468 == 32 )
                {
                    unk_20000468 = 33;
                    mb_setup_uart();
                }
            }
            else
            {
                ++unk_20000468;
            }
        }
        else
        {
            unk_20000468 = 1;
            RCC_APB2ENR_clear_or_set(0x4000, 1);
            dword_20000460 = 0xC0;
            word_20000464 = 770;
            word_20000466 = 1;
            init_port(&GPIO_B, (struc_20000A30 *)&dword_20000460);
            // Enable TX and RX
            USART1_CR1 = 0xC;
            LOWORD(USART1_BRR) = 5000;
            // Enable UART
            v0 = USART1_CR1;
            USART1_CR1 = v0 | 1;
        }
    }
}
// 20000460: using guessed type _DWORD dword_20000460;
// 20000464: using guessed type __int16 word_20000464;
// 20000466: using guessed type __int16 word_20000466;
// 4001380C: using guessed type int USART1_BRR;

//----- (08007566) --------------------------------------------------------
void __cdecl sub_8007566()
{
    unk_20000468 = 0;
}

//----- (08007584) --------------------------------------------------------
void __cdecl sub_8007584()
{
    sub_8003418(0x10000000, 1);
    sub_8003418(0x10000000, 0);
}

//----- (0800759C) --------------------------------------------------------
void __fastcall sub_800759C(int a1)
{
    int v1; // r2

    v1 = PWR_CR;
    PWR_CR = a1 | v1 & 0xFFFFFF1F;
}
// 40007000: using guessed type int PWR_CR;

//----- (080075AA) --------------------------------------------------------
void __fastcall setup_power_mode(int clear_or_set)
{
    bool v1; // zf
    int v2; // r0

    v1 = clear_or_set == 0;
    v2 = PWR_CR;
    if ( v1 )
    {
        PWR_CR = v2 & 0xFFFFFFEF;
    }
    else
    {
        PWR_CR = v2 | 0x10;
    }
}
// 40007000: using guessed type int PWR_CR;

//----- (080075C8) --------------------------------------------------------
void __fastcall sub_80075C8(int *a1)
{
    int v1; // r4
    int v2; // r3
    int v3; // r4
    char *v4; // r3
    int v5; // r4

    v1 = ~*a1;
    if ( *((_BYTE *)a1 + 6) )
    {
        EXTI_IMR &= v1;
        EXTI_EMR &= ~*a1;
        *(int *)((char *)&EXTI_IMR + *((unsigned __int8 *)a1 + 4)) |= *a1;
        EXTI_RTSR &= ~*a1;
        EXTI_FTSR &= ~*a1;
        v2 = *((unsigned __int8 *)a1 + 5);
        v3 = *a1;
        if ( v2 == 16 )
        {
            EXTI_RTSR |= v3;
            EXTI_FTSR |= *a1;
            return;
        }
        v4 = (char *)&EXTI_IMR + v2;
        v5 = v3 | *(_DWORD *)v4;
    }
    else
    {
        v4 = (char *)&EXTI_IMR + *((unsigned __int8 *)a1 + 4);
        v5 = v1 & *(_DWORD *)v4;
    }
    *(_DWORD *)v4 = v5;
}
// 40010400: using guessed type int EXTI_IMR;
// 40010404: using guessed type int EXTI_EMR;
// 40010408: using guessed type int EXTI_RTSR;
// 4001040C: using guessed type int EXTI_FTSR;

//----- (08007630) --------------------------------------------------------
BOOL __fastcall sub_8007630(int a1)
{
    BOOL result; // r0
    int v3; // r3
    int v4; // r3
    int v5; // r2

    result = 0;
    v3 = EXTI_IMR;
    v4 = v3 & a1;
    v5 = EXTI_PR;
    if ( (a1 & v5) != 0 )
    {
        return v4 != 0;
    }
    return result;
}
// 40010400: using guessed type int EXTI_IMR;
// 40010414: using guessed type int EXTI_PR;

//----- (08007648) --------------------------------------------------------
void __fastcall set_EXTI_PR(int result)
{
    EXTI_PR = result;
}
// 40010414: using guessed type int EXTI_PR;

//----- (080079EC) --------------------------------------------------------
int DMA_CH1_irq()
{
    int v0; // r0
    int result; // r0
    int v2; // r1
    int v3; // r2
    signed int v4; // r3
    int v5; // r0
    int v6; // r1
    int v7; // r2
    char ISR; // r2
    __int16 v9; // r6
    int v10; // r7
    int CR; // r4
    __int16 v12; // r3
    int v13; // r2
    int v14[8]; // [sp+0h] [bp-20h] BYREF

    v0 = DMA1_ISR;
    result = v0 << 30;
    if ( result < 0 )
    {
        if ( sub_8001FF8() )
        {
            switch ( main_loop_state )
            {
                case 2:
                    if ( byte_200004B4 == 1 )
                    {
                        byte_2000019D = 0;
                        dword_2000046C = sub_8006150(word_2000031E, (__int16)dword_2000049C, &word_200003DC, 0);
                        dword_20000470 = sub_8006150(0, SHIWORD(dword_2000049C), &word_200003C4, 0);
                        v5 = sub_8003CD0();
                        sub_8006304(v5, v6, v7);
                        sub_8006462();
                        calc_some_factors(v14, dword_2000046C, dword_20000470);
                        hmm_dword_20000474[0] = v14[0];
                        hmm_dword_20000474[1] = v14[1];
                        sub_80019E4(v14[0], v14[1]);
                        byte_200004B4 = 0;
                        byte_200004B5 = 1;
                    }
                    break;
                case 3:
                case 4:
                case 5:
                case 8:
                case 9:
                case 13:
                case 15:
                    sub_8005478((unsigned __int8)main_loop_state - 2, v2, v3, v4);
                    break;
                default:
                    goto LABEL_7;
            }
        }
        // Wait for EOS (End of sequence)
        do
        {
LABEL_7:
            ISR = stru_40012400.ISR;
        }
        while ( (ISR & 8) == 0 );
        mb_adc_ch_8_battery_voltage[0] = stru_40012400.DR[0];
        stru_40012400.CHSELR = 0x80;
        stru_40012400.SMPR = 2;
        stru_40012400.ISR = 8;
        stru_40012400.CR |= 4u;
        if ( word_200004AE < 106 )
        {
            v9 = 0;
        }
        else
        {
            v9 = word_200004AE - 105;
        }
        TIM14_CCR1 = v9;
        while ( (stru_40012400.ISR & 8) == 0 )
        {
            ;
        }
        battery_voltage_adc_value = stru_40012400.DR[0];
        v10 = 4 * byte_20000198[0];
        stru_40012400.CHSELR = *(_DWORD *)((char *)&unk_8007938 + v10);
        stru_40012400.SMPR = *(_DWORD *)((char *)&unk_800794C + v10);
        stru_40012400.ISR = 8;
        CR = stru_40012400.CR;
        stru_40012400.CR = CR | 4;
        while ( (stru_40012400.ISR & 8) == 0 )
        {
            ;
        }
        v12 = stru_40012400.DR[0];
        mb_adc_ch_8_battery_voltage[byte_20000198[0]] = v12;
        v13 = stru_40012400.CR | 0x10;
        stru_40012400.CR = v13;
        result = 2;
        DMA1_IFCR = 2;
    }
    return result;
}
// 8007A22: variable 'v2' is possibly undefined
// 8007A22: variable 'v3' is possibly undefined
// 8007A22: variable 'v4' is possibly undefined
// 8007A66: variable 'v6' is possibly undefined
// 8007A66: variable 'v7' is possibly undefined
// 20000198: using guessed type unsigned __int8 byte_20000198[3];
// 2000019D: using guessed type char byte_2000019D;
// 200001B8: using guessed type _WORD mb_adc_ch_8_battery_voltage[1];
// 2000031E: using guessed type __int16 word_2000031E;
// 200003C4: using guessed type __int16 word_200003C4;
// 200003DC: using guessed type __int16 word_200003DC;
// 2000046C: using guessed type int dword_2000046C;
// 20000470: using guessed type int dword_20000470;
// 20000474: using guessed type int hmm_dword_20000474[2];
// 2000049C: using guessed type int dword_2000049C;
// 200004AE: using guessed type __int16 word_200004AE;
// 200004B1: using guessed type char mb_global_main_state;
// 200004B4: using guessed type char byte_200004B4;
// 200004B5: using guessed type char byte_200004B5;
// 40002034: using guessed type int TIM14_CCR1;
// 40012400: using guessed type struct_adc stru_40012400;
// 40020000: using guessed type int DMA1_ISR;
// 40020004: using guessed type int DMA1_IFCR;

//----- (08007B08) --------------------------------------------------------
void TIM1_BRK_UP_TRG_COM()
{
    char v0; // r0
    char v1; // r0

    v0 = TIM1_SR;
    if ( (v0 & 1) != 0 )
    {
        if ( byte_200004B5 == 1 )
        {
            stop_or_start_timer((int)&TIM1_CR1, 1);
            byte_200004B5 = 0;
        }
        LOWORD(TIM1_SR) = -2;
        some_speed_limiting();
    }
    else
    {
        v1 = TIM1_SR;
        if ( (v1 & 0x80) != 0 )
        {
            sub_8003672((int)&TIM1_CR1, 128);
            set_error_bit((unsigned int)&TIM1_CR1 >> 21);
        }
    }
}
// 200004B5: using guessed type char byte_200004B5;
// 40012C00: using guessed type int TIM1_CR1;
// 40012C10: using guessed type int TIM1_SR;

//----- (08007B4C) --------------------------------------------------------
void __cdecl ADC_ISR()
{
    char ISR; // r0

    ISR = stru_40012400.ISR;
    if ( (ISR & 0x80) != 0 )
    {
        if ( (error_bits & 0x80000) == 0 )
        {
            set_error_bit(0x400);
        }
        stru_40012400.ISR = 0x80;
    }
}
// 40012400: using guessed type struct_adc stru_40012400;

//----- (08007B6E) --------------------------------------------------------
void __cdecl HmmReservedIV()
{
    if ( must_reset(0x10000) )
    {
        // do a reset
        __dsb(0xFu);
        SCB_AIRCR = 0x5FA0004;
        __dsb(0xFu);
        while ( 1 )
        {
            ;
        }
    }
}
// E000ED0C: using guessed type int SCB_AIRCR;

//----- (08007D40) --------------------------------------------------------
int __fastcall sub_8007D40(_DWORD *a1)
{
    unsigned __int8 *v1; // r1
    _DWORD *v2; // r2

    v1 = (unsigned __int8 *)a1[2];
    while ( v1 == (unsigned __int8 *)a1[3] )
    {
        v2 = (_DWORD *)*a1;
        v1 = (unsigned __int8 *)(*a1 + *(_DWORD *)*a1);
        a1[3] = &v1[*(_DWORD *)(*a1 + 4)];
        *a1 = v2 + 2;
    }
    a1[2] = v1 + 1;
    return *v1;
}

//----- (08007D62) --------------------------------------------------------
_DWORD *__fastcall controller_main_reset_function_2(_DWORD *a1)
{
    int v1; // r9
    _BYTE *v2; // r5
    _DWORD *v3; // r4
    unsigned int v4; // r0
    _BYTE *v5; // r7
    int v6; // r6
    char *v7; // r0
    int v8; // r0
    _DWORD *result; // r0
    char v10; // [sp+0h] [bp-30h]
    char v11; // [sp+1h] [bp-2Fh]
    _DWORD *v12; // [sp+4h] [bp-2Ch]
    int v13[2]; // [sp+8h] [bp-28h] BYREF
    char *v14; // [sp+10h] [bp-20h]
    char *v15; // [sp+14h] [bp-1Ch]

    v13[0] = (int)(a1 + 2);
    v13[1] = (int)&a1[2 * (*a1 >> 1) + 2];
    v2 = 0;
    v14 = 0;
    v15 = 0;
    v3 = &a1[2 * (*a1 >> 1) + 2];
    v4 = a1[1];
    v11 = v4 & 1;
    v12 = &v3[2 * (v4 >> 1)];
    v5 = 0;
    while ( 1 )
    {
        result = v12;
        if ( v3 == v12 )
        {
            return result;
        }
        do
        {
            v6 = (char)sub_8007D40(v13);
            do
            {
                while ( 1 )
                {
                    v7 = v14;
                    if ( v14 != v15 )
                    {
                        break;
                    }
                    v14 = (char *)(v13[0] + *(_DWORD *)v13[0]);
                    v15 = &v14[*(_DWORD *)(v13[0] + 4)];
                    v13[0] += 8;
                }
                ++v14;
                v10 = *v7;
                while ( 1 )
                {
                    if ( v2 == v5 )
                    {
                        do
                        {
                            if ( v3 == v12 )
                            {
                                sub_8007E1A();
                            }
                            v2 = (_BYTE *)*v3;
                            if ( v11 )
                            {
                                v2 += v1;
                            }
                            v8 = v3[1];
                            v5 = &v2[v8];
                            v3 += 2;
                        }
                        while ( v2 == &v2[v8] );
                    }
                    *v2++ = v10;
                    if ( v6 >= 0 )
                    {
                        break;
                    }
                    if ( !++v6 )
                    {
                        goto LABEL_14;
                    }
                }
                --v6;
            }
            while ( v6 >= 0 );
LABEL_14:
            ;
        }
        while ( v2 != v5 );
    }
}
// 8007DEA: variable 'v1' is possibly undefined

//----- (08007E1A) --------------------------------------------------------
void __noreturn sub_8007E1A()
{
    break_loop();
}

//----- (08007E24) --------------------------------------------------------
void __noreturn break_loop()
{
    while ( 1 )
    {
        __breakpoint(171);
    }
}

//----- (08007E38) --------------------------------------------------------
int *controller_main_rcc_Setup()
{
    int *result; // r0
    int v1; // r1
    int v2; // r1
    int v3; // r1
    int v4; // r2
    int v5; // r2
    int v6; // r2
    int v7; // r2
    int v8; // r2
    int v9; // r2
    int v10; // r2
    int v11; // r2
    int v12; // r2

    result = &RCC_CR;
    v1 = RCC_CR;
    RCC_CR = v1 | 1;
    v2 = RCC_CFGR;
    RCC_CFGR = v2 & 0xF8FFB80C;
    v3 = RCC_CR;
    RCC_CR = v3 & 0xFEF6FFFF;
    RCC_CR = v3 & 0xFEF2FFFF;
    v4 = RCC_CFGR;
    RCC_CFGR = v4 & 0xFFC0FFFF;
    v5 = RCC_CFGR2;
    RCC_CFGR2 = v5 & 0xFFFFFFF0;
    v6 = RCC_CFGR3;
    RCC_CFGR3 = v6 & 0xFFFFFEAC;
    v7 = RCC_CR2;
    RCC_CR2 = v7 & 0xFFFFFFFE;
    RCC_CIR = 0;
    Flash_ACR = 17;
    v8 = RCC_CFGR;
    RCC_CFGR = v8;
    v9 = RCC_CFGR;
    RCC_CFGR = v9;
    v10 = RCC_CFGR;
    RCC_CFGR = v10 & 0xFFC0FFFF;
    RCC_CFGR = v10 & 0xFFC0FFFF | 0x280000;
    RCC_CR = v3 & 0xFEF2FFFF | 0x1000000;
    while ( (RCC_CR & 0x2000000) == 0 )
    {
        ;
    }
    RCC_CFGR &= 0xFFFFFFFC;
    v11 = RCC_CFGR | 2;
    RCC_CFGR = v11;
    do
    {
        v12 = RCC_CFGR & 0xC;
    }
    while ( v12 != 8 );
    return result;
}
// 40021000: using guessed type int RCC_CR;
// 40021004: using guessed type int RCC_CFGR;
// 40021008: using guessed type int RCC_CIR;
// 4002102C: using guessed type int RCC_CFGR2;
// 40021030: using guessed type int RCC_CFGR3;
// 40021034: using guessed type int RCC_CR2;
// 40022000: using guessed type int Flash_ACR;

//----- (08007EF0) --------------------------------------------------------
void __noreturn controller_main_reset()
{
    char *ptr; // r0

    ptr = start_of_bss;
    do
    {
        *ptr++ = 0;
    }
    while ( &end_of_bss >= (_UNKNOWN *)ptr );
    controller_main_rcc_Setup();
    controller_main();
}

//----- (08007F1C) --------------------------------------------------------
int *controller_main_calls_reset_functions_1_and_2_0()
{
    int *i; // r1
    int *result; // r0

    for ( i = &dword_8007F44; i != (int *)controller_main; i = result )
    {
        result = (int *)((_DWORD **(__fastcall *)(_DWORD *))((char *)i + *i))(i + 1);
    }
    return result;
}
// 8007F44: using guessed type int dword_8007F44;
// 8007F58: using guessed type int dword_8007F58;

//----- (08007F70) --------------------------------------------------------
void __cdecl __noreturn controller_main()
{
    if ( must_initialize() )
    {
        controller_main_calls_reset_functions_1_and_2_0();
    }
    controller_main_loop();
}

//----- (08007F8A) --------------------------------------------------------
int must_initialize()
{
    return 1;
}

//----- (08007F8E) --------------------------------------------------------
void __fastcall __noreturn break_loop_1()
{
    break_loop_0();
}

//----- (08007F98) --------------------------------------------------------
void __fastcall __noreturn break_loop_0()
{
    break_loop();
}
