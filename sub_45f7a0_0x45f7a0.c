// 函数名称: sub_45f7a0
// 虚拟地址: 0x45f7a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __thiscallsub_45f7a0(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* result = arg1
    
    if (*arg2 == 1)
        result = *result
        int32_t ecx = 0
        int32_t i = arg2[2]
        
        if (i != *result)
            do
                ecx += 1
            while (i != result[ecx])
        
        if (*arg3 == 1)
            int32_t edx_1 = 0
            
            while (arg3[2] != *result)
                result = &result[1]
                edx_1 += 1
            
            result.b = ecx s< edx_1
            return result
    
    sub_489550(result, &data_5b2591, "a.type == ROLLGFX_DIE", 
        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x3893, "DiceSorter::index")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
