#include <stdio.h>
#include <stdlib.h>

#define N 4
struct Stu{
   char name[128];
   int id;
   int score;
}students[N], sb;

int main(void)
{
   FILE *fp;
   int i;
   if(NULL == (fp = fopen("source.txt", "wb"))){
      printf("打开文件失败\n");
      exit(EXIT_FAILURE);
   }
   printf("请输入学生信息（格式：姓名 学号 分数）: ");
   for(i = 0; i < N; i++){
      scanf("%s %d %d", students[i].name, &(students[i].id), &(students[i].score));
   }
   fwrite(students, sizeof(struct Stu), N, fp);
   fclose(fp);

   if(NULL == (fp = fopen("source.txt", "rb"))){
      printf("打开文件失败\n");
      exit(EXIT_FAILURE);
   }
   fseek(fp, sizeof(struct Stu), SEEK_SET);
   fread(&sb, sizeof(struct Stu), 1, fp);
   printf("姓名：%s\n", sb.name);
   printf("学号：%d\n", sb.id);
   printf("分数：%d\n", sb.score);
   fclose(fp);

   return 0;
}
