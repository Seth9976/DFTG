// 函数名称: sub_474cc0
// 虚拟地址: 0x474cc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_474cc0(uint32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_40
    int32_t var_40
    int32_t eax_1 = __security_cookie ^ &var_40
    int32_t* esi = arg1
    sub_45a830(eax_1, arg2, arg1, 1, false, 1, 5, 1, 0)
    int32_t var_3c[0xc]
    sub_4c5670(data_126bd6c, &var_3c)
    void* eax_2
    int32_t ecx_2
    eax_2, ecx_2 = sub_4c5920(&var_3c)
    char const* const var_54
    int32_t var_50
    char const* const var_4c
    char* ecx_3
    
    if (esi[0xce] == 0x10)
        int32_t edx_1 = *esi
        int32_t var_4c_1 = ecx_2
        void* ecx_4 = data_632804
        var_40 = arg2[0xb]
        eax_2 = sub_45bde0(&var_40, edx_1, ecx_4, 0x10, 0, &var_40, 1, 0, 0)
        void* ecx_5 = data_6cfe4c
        
        if (ecx_5 != 0)
            *(ecx_5 + 0xa68)
            void* result = sub_45d0d0()
            esi[1] = 0x18
            @__security_check_cookie@4(eax_1 ^ &var_40)
            return result
        
        var_4c = "GetClient"
        var_50 = 0x75
        var_54 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_3 = "gClient"
    else
        var_4c = "ExecDieDiscard"
        var_50 = 0x6dba
        var_54 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx_3 = "pgui.choiceData.type == CHOICE_REMOVE"
    
    sub_489550(eax_2, &data_5b2591, ecx_3, var_54, var_50, var_4c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
