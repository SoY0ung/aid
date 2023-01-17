#define SYNC_RINGTONE 0x100
#define SYNC_MEDIA 0x200
#define SYNC_VOICEMEMO 0x400
#define SYNC_BOOK 0x800
#define SYNC_PHOTO 0x1000
#define SYNC_DATA 0x2000
#define SYNC_KEYBAG 0x4000
#define SYNC_APPLICATION 0x8000

#define SYNC_RINGTONG_DICT 0x1
#define SYNC_MEDIA_DICT 0x2
#define SYNC_VOICEMEMO_DICT 0x4

#define SYNC_RINGTONG_ARR2 0x10000
#define SYNC_MEDIA_ARR2 0x20000
#define SYNC_VOICEMEMO_ARR2 0x40000
#define SYNC_BOOK_ARR2 0x80000
#define SYNC_PHOTO_ARR2 0x100000
#define SYNC_DATA_ARR2 0x200000
#define SYNC_APPLICATION_ARR2 0x800000

//////////////////////////////////////////////

#define SYNC_FINISHED_RINGTONE 0x01
#define SYNC_FINISHED_MEDIA 0x02
#define SYNC_FINISHED_VOICEMEMO 0x04
#define SYNC_FINISHED_BOOK 0x08
#define SYNC_FINISHED_DATA 0x20

#define SYNC_FINISHED_2_RINGTONE 0x1000000
#define SYNC_FINISHED_2_MEDIA 0x2000000
#define SYNC_FINISHED_2_VOICEMEMO 0x4000000
#define SYNC_FINISHED_2_BOOK 0x8000000
#define SYNC_FINISHED_2_PHOTO 0x10000000
#define SYNC_FINISHED_2_DATA 0x20000000
#define SYNC_FINISHED_2_KEYBAG 0x40000000
#define SYNC_FINISHED_2_APPLICATION 0x80000000


DWORD WINAPI ReceiveMessageThreadFunc(LPVOID lpParam);
void SendSyncRequest(ATHRef ath, unsigned int flags, string grappa);
void SendMetadataSyncFinished(ATHRef ath, unsigned int flags);

extern bool g_startSync;
extern unsigned char* g_grappa;
extern unsigned long g_grappa_len;
extern unsigned int g_GrappaID;