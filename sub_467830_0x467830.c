// 函数名称: sub_467830
// 虚拟地址: 0x467830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_467830(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void var_2b4
    void var_2b4
    int32_t eax_1 = __security_cookie ^ &var_2b4
    int32_t* esi = arg2
    int32_t* ebx = arg1
    arg2.b = 0
    int32_t* var_2b0 = ebx
    sub_467410(esi, arg2.b)
    int32_t* eax_2 = sub_452c30(esi[0x14])
    int32_t ecx_2 = esi[0x15]
    int32_t* eax_3 = sub_452c30(ecx_2)
    int32_t* edi = eax_3
    int32_t var_2c8
    char const* const var_2c4_1
    
    if (*esi == 2)
        if (esi[0x12] == 0)
            int32_t* eax_5 = sub_452cc0(sub_452c30(esi[0x15])[7])
            eax_3, ecx_2 = sub_45a020(eax_5, edi, eax_5, 0)
        
        if (esi[0x12] != 0 || *esi == 2)
            int32_t var_2c4_3 = ecx_2
            int32_t var_2c8_1 = 2
            uint32_t var_200
            uint32_t var_170[0x2][0x4]
            __builtin_memcpy(&var_200, 
                sub_461900(&var_170, sub_4744b0(eax_3, esi, ebx), ebx, &var_170, edi, 0), 0x90)
            int32_t ecx_8 = ebx[0xa6]
            void* edx_3 = &ebx[ecx_8 * 3]
            ebx[0xa6] = ecx_8 + 1
            *(edx_3 + 0xb8) = 1
            *(edx_3 + 0xbc) = eax_2[0xb]
            *(edx_3 + 0xc0) = edi[0xb]
            int32_t var_2a0
            int32_t var_290
            uint32_t var_28c[0x8][0x4]
            uint32_t var_1fc
            int32_t var_e0[0xc]
            void var_b0
            
            if (var_1fc != 0)
                if (var_1fc s> 0)
                    sub_4c5670(data_126be7c, &var_e0)
                    sub_4c5920(&var_e0)
                
                sub_452770(ebx, 0, var_1fc, 0)
                
                if (var_1fc s<= 0)
                    ebx[0xc6] += var_1fc
                else
                    ebx[0xc4] += var_1fc
                
                uint32_t (* eax_14)[0x4] = sub_481490(&data_62d6c4)
                void* var_2c4_5 = 0x8c
                int32_t var_294_1 = 0
                char var_2c8_3 = 0
                *eax_14 = 3
                (*eax_14)[0x16] = 0
                uint32_t (* var_2cc_2)[0x8][0x4] = &var_28c
                (*eax_14)[0x17] = *var_2b0
                eax_14[6][0] = var_1fc
                (*eax_14)[0x19].b = 0
                (*eax_14)[0x1a] = 6
                _memset(var_2cc_2, var_2c8_3, var_2c4_5)
                var_2a0 = *var_2b0
                int32_t var_29c_1 = 0x26
                int32_t var_298_1 = 0xffffffff
                var_290 = 0xffffffff
                __builtin_memcpy(&var_b0, &var_2a0, 0xa0)
                sub_452860(&eax_14[7], &var_b0)
                ebx = var_2b0
            
            uint32_t edi_2 = var_200
            
            if (edi_2 != 0)
                data_632550 -= edi_2
                
                if (edi_2 s> 0)
                    sub_4c5670(data_126be88, &var_e0)
                    sub_4c5920(&var_e0)
                
                sub_452770(ebx, 1, edi_2, 0)
                
                if (edi_2 s<= 0)
                    ebx[0xc7] += edi_2
                else
                    ebx[0xc5] += edi_2
                
                uint32_t (* eax_16)[0x4] = sub_481490(&data_62d6c4)
                void* var_2c4_7 = 0x8c
                int32_t var_294_2 = 0
                char var_2c8_5 = 0
                *eax_16 = 3
                (*eax_16)[0x16] = 1
                uint32_t (* var_2cc_4)[0x8][0x4] = &var_28c
                (*eax_16)[0x17] = *var_2b0
                eax_16[6][0] = edi_2
                (*eax_16)[0x19].b = 0
                (*eax_16)[0x1a] = 6
                _memset(var_2cc_4, var_2c8_5, var_2c4_7)
                var_2a0 = *var_2b0
                int32_t var_29c_2 = 0x27
                int32_t var_298_2 = 0xffffffff
                var_290 = 0xffffffff
                __builtin_memcpy(&var_b0, &var_2a0, 0xa0)
                sub_452860(&eax_16[7], &var_b0)
            
            sub_46a420(0x1b)
            data_632a50 = 2
            int32_t result = esi[0x22a]
            data_632a54 = result
            @__security_check_cookie@4(eax_1 ^ &var_2b4)
            return result
        
        var_2c4_1 = "ShipActionTrayMoveTrade"
        var_2c8 = 0x4c12
    else
        var_2c4_1 = "TrayIsAt"
        var_2c8 = 0x4bfe
    
    sub_489550(eax_3, &data_5b2591, "gfx.type == ROLLGFX_TRAY_SHIPPING", 
        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_2c8, var_2c4_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
