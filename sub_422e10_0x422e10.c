// 函数名称: sub_422e10
// 虚拟地址: 0x422e10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_422e10(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_150
    int32_t var_150
    int32_t eax_1 = __security_cookie ^ &var_150
    void* eax_2 = sub_437f10(*(data_6d00d8 + 0xbe4))
    int32_t var_148
    _memset(&var_148, 0, 0x138)
    int32_t var_14c = 1
    var_150 = 0x3e8
    char* const eax_3 = &data_5b2591
    char* ecx_2 = *eax_2
    
    if (ecx_2 != 0)
        eax_3 = ecx_2
    
    char var_144
    _strncpy(&var_144, eax_3, 0x10)
    char var_135 = 0
    char* const ecx_3 = &data_5b2591
    int32_t var_134 = *(eax_2 + 8)
    char* eax_5 = *(eax_2 + 0x224)
    
    if (eax_5 != 0)
        ecx_3 = eax_5
    
    char var_130[0x1f]
    _strncpy(&var_130, ecx_3, 0x20)
    char var_111 = 0
    char* const ecx_4 = &data_5b2591
    var_148 = *(eax_2 + 0x22c)
    char* eax_7 = *arg1
    
    if (eax_7 != 0)
        ecx_4 = eax_7
    
    char var_110[0xfe]
    _strncpy(&var_110, ecx_4, 0xff)
    void* eax_8 = data_6cfe4c
    char var_12 = 0
    
    if (eax_8 == 0)
        sub_489550(eax_8, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(eax_8 + 0x18) == 3)
        int32_t eax_9 = *(eax_8 + 0x14)
        void* ecx_5 = data_aca0dc
        
        if (eax_9 != 0)
            uint32_t edx_1 = zx.d(eax_9.w)
            
            if (edx_1 u< *(ecx_5 + 4))
                void* esi_2 = edx_1 * 0x4c + *ecx_5
                
                if (*(esi_2 + 0x48) == eax_9)
                    int32_t var_15c_1 = 0xf42a5
                    sub_48be40(eax_9, 0x140, esi_2 + 0x3c)
                    sub_48bc20(&var_150, 0x140, esi_2 + 0x3c, &var_150)
    
    void* result
    
    for (int32_t i = 0; i s< 4; i += 1)
        result = sub_422d20(i)
    
    @__security_check_cookie@4(eax_1 ^ &var_150)
    return result
}
