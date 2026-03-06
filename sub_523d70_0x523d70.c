// 函数名称: sub_523d70
// 虚拟地址: 0x523d70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_523d70(void* arg1)
{
    // 第一条实际指令: void* eax = _strrchr(arg1, 0x2e)
    void* eax = _strrchr(arg1, 0x2e)
    
    if (eax != 0)
        void* const esi_1 = &data_5d36c8
        
        do
            if (__stricmp(*(esi_1 + 4), eax + 1) == 0)
                return *esi_1
            
            esi_1 += 8
        while (*(esi_1 + 4) != 0)
    
    return 0
}
