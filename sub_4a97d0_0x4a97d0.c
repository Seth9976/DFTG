// 函数名称: sub_4a97d0
// 虚拟地址: 0x4a97d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4a97d0(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, char arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t* result = arg4
    int32_t edx = *result
    int32_t edi = *(arg3 + 0x1410)
    
    if (arg5 == 0)
        result = nullptr
        
        if (edx s> 0)
            do
                if (*(arg2 + (result << 2)) == edi)
                    arg5 = 1
                    break
                
                result += 1
            while (result s< edx)
    else
        int32_t ecx = 0
        
        if (edx s> 0)
            do
                if (*(arg2 + (ecx << 2)) == edi)
                    *arg4 = edx - 1
                    result = *(arg2 + ((edx - 1) << 2))
                    *(arg2 + (ecx << 2)) = result
                    break
                
                ecx += 1
            while (ecx s< edx)
    
    int32_t i = 0
    
    if (*(arg3 + 0x1190) s> 0)
        do
            sub_49e970(arg3, i)
            result = sub_4a97d0(arg4, arg5.d)
            i += 1
        while (i s< *(arg3 + 0x1190))
    
    return result
}
