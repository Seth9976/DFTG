// 函数名称: sub_47dd90
// 虚拟地址: 0x47dd90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_47dd90(uint32_t arg1, int32_t* arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, void* arg6, uint32_t arg7, char arg8)
{
    // 第一条实际指令: int32_t var_18
    int32_t var_18
    char const* const var_14
    char* ecx
    int32_t esi_1
    
    if (arg8 != 0)
        esi_1 = 0
    label_47ddf8:
        arg1 = sub_47af60(arg1, arg2, arg3, arg4, arg5, arg6, arg7)
        uint32_t var_14_3
        
        switch (esi_1)
            case 0, 1
                if (arg2 != 0xffffffff)
                    return sub_47baa0(arg4, arg2, arg3, arg4, arg5, arg6, arg7, arg8.d)
                
                if (esi_1 == 0)
                    arg1 = arg8.d
                
                if (esi_1 == 0 && arg1.b != 0)
                    var_14_3 = arg1
                    return sub_47a510(arg4, 0xffffffff, arg3, arg4, arg5)
                
                var_14 = "ProcessNotifyUI"
                var_18 = 0x85e4
                ecx = "arg_who != PLAYER_NONE || (notifyType == NOTIFY_INSTANT && instant)"
            case 2
                if (arg2 != 0xffffffff)
                    return sub_47cff0(arg4, arg2, arg3, arg4, arg5, arg6, arg7)
                
                var_14 = "ProcessNotifyUI"
                var_18 = 0x85f3
                ecx = "arg_who != PLAYER_NONE"
            case 3
                if (arg2 == 0xffffffff)
                    var_14_3 = arg8.d
                    return sub_47a510(arg4, 0xffffffff, arg3, arg4, arg5)
                
                var_14 = "ProcessNotifyUI"
                var_18 = 0x85ef
                ecx = "arg_who == PLAYER_NONE"
    else if (arg3 u> 0x42)
    label_47ddbe:
        
        if (arg2 != 0xffffffff)
            arg1 = sub_4781a0(arg2)
            uint32_t esi_2 = zx.d(arg1.b)
            int32_t esi_3 = neg.d(esi_2)
            esi_1 = sbb.d(esi_3, esi_3, esi_2 != 0) + 2
            goto label_47ddf8
        
        var_14 = "CalcNotifyQueueType"
        var_18 = 0x7b50
        ecx = "arg_who != PLAYER_NONE"
    else
        arg1 = zx.d(lookup_table_47deec[arg3])
        
        switch (arg1)
            case 0
                esi_1 = 3
                goto label_47ddf8
            case 1
                goto label_47ddbe
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_18, 
        var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
