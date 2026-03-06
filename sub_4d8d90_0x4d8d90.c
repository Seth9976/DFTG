// 函数名称: sub_4d8d90
// 虚拟地址: 0x4d8d90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4d8d90(void* arg1)
{
    // 第一条实际指令: int32_t* ecx = *(arg1 + 0x20)
    int32_t* ecx = *(arg1 + 0x20)
    
    if (ecx != 0)
        sub_527af0(ecx)
    
    sub_52f380(*(arg1 + 0x28))
    void* ebx = *(arg1 + 0x30)
    void* i_1 = *(ebx + 8)
    
    if (i_1 != 0)
        void* i
        
        do
            void* j_1 = *(i_1 + 4)
            
            if (j_1 != 0)
                void* j
                
                do
                    j = *(j_1 + 8)
                    _free(j_1)
                    j_1 = j
                while (j != 0)
            
            i = *(i_1 + 8)
            _free(i_1)
            i_1 = i
        while (i != 0)
    
    return _free(ebx)
}
