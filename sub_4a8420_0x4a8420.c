// 函数名称: sub_4a8420
// 虚拟地址: 0x4a8420
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4a8420(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4 @ xmm3, int32_t arg5)
{
    // 第一条实际指令: int32_t edx = *(arg3 + 0x110c)
    int32_t edx = *(arg3 + 0x110c)
    int32_t* result = *(arg3 + 0x1108)
    int32_t esi = 0
    int32_t edi = arg5
    
    if (edx s> 0)
        while (result[1] != edi || *result != arg2)
            esi += 1
            result = &result[7]
            
            if (esi s>= edx)
                goto label_4a846b
    
    if (edx s> 0 && result != 0)
        edx.b = 0
    else
    label_4a846b:
        
        if (*(arg3 + 0x1110) != 0)
            result, edx = sub_4bc680(arg3 + 0x1108)
            edx.b = 1
        else
            *(arg3 + 0x1108) = sub_498490(0x3800)
            *(arg3 + 0x110c) = 0
            *(arg3 + 0x1110) = 0x200
            result, edx = sub_4bc680(arg3 + 0x1108)
            edx.b = 1
    
    *result = arg2
    
    if (edi == 0xfffffc18)
        edi = *(arg3 + 0x109c)
    
    result[1] = edi
    result[5] = arg4
    result[2] = 0
    
    if (edx.b == 0)
        return result
    
    return sub_4a3580(arg3)
}
