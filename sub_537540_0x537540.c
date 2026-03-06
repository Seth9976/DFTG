// 函数名称: sub_537540
// 虚拟地址: 0x537540
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_537540(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2be9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg1
    int32_t var_8_1 = 0
    int32_t var_14 = 0
    char* esi = *arg2
    
    while (true)
        char i = *esi
        
        if (i != 0xd && i != 0xa)
            char* ecx = esi
            
            while (i != 0xa)
                if (i == 0)
                    break
                
                i = esi[1]
                esi = &esi[1]
                
                if (i == 0xd)
                    break
            
            *arg2 = esi
            *arg1 = &data_5b2591
            int32_t var_8_2 = 0
            int32_t var_14_1 = 1
            sub_48a6e0(arg1, ecx, esi - ecx)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        
        esi = &esi[1]
}
