// 函数名称: sub_533580
// 虚拟地址: 0x533580
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_533580(int32_t arg1, int32_t arg2, int32_t* arg3, char* arg4)
{
    // 第一条实际指令: if (arg2 != 0xffffffff)
    if (arg2 != 0xffffffff)
        int32_t ecx = arg3[0xd]
        int32_t result
        
        if (ecx != 0)
            result = sub_571ef0(arg1, arg2, ecx, arg4)
        
        if (ecx != 0 && result != 0)
            return result
        
        void* eax = *arg3
        int32_t ecx_1 = *(eax + 0x38)
        
        if (ecx_1 != 0)
            result = sub_571ef0(eax, arg2, ecx_1, arg4)
            
            if (result != 0)
                return result
    
    return 0
}
