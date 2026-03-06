// 函数名称: sub_457310
// 虚拟地址: 0x457310
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_457310(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg1 u> 0x10)
        sub_489550(result, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
            0x142b, "ValidateFaceFitsPhase")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_489700() __tailcall
        
        breakpoint
    
    bool cond:0_1
    bool cond:1_1
    bool cond:2_1
    
    switch (arg1)
        case 0
            result.b = 1
            return result
        case 1, 6
            result.b = arg2 == 1
            return result
        case 2, 8
            result.b = arg2 == 2
            return result
        case 3, 7
            result.b = arg2 == 3
            return result
        case 4, 9
            result.b = arg2 == 4
            return result
        case 5, 0xa
            result.b = arg2 == 5
            return result
        case 0xb
            cond:0_1 = arg2 == 2
        label_457352:
            
            if (cond:0_1)
                result.b = 1
                return result
            
            cond:2_1 = arg2 == 3
            goto label_457357
        case 0xc
            cond:1_1 = arg2 == 4
        case 0xd
            if (arg2 != 1 && arg2 != 2)
                result.b = 0
                return result
            
            result.b = 1
            return result
        case 0xe
            cond:0_1 = arg2 == 1
            goto label_457352
        case 0xf
            if (arg2 == 1)
                result.b = 1
                return result
            
            cond:2_1 = arg2 == 4
        label_457357:
            
            if (cond:2_1)
                result.b = 1
                return result
            
            result.b = 0
            return result
        case 0x10
            cond:1_1 = arg2 == 1
    
    if (cond:1_1)
        result.b = 1
        return result
    
    if (arg2 != 5)
        result.b = 0
        return result
    
    result.b = 1
    return result
}
