//
// Created by Administrator on 2021/2/25.
//
#include <stdio.h>
#include <curl/curl.h>

int main()
{
    FILE *file = fopen("hello.txt", "w");

    CURL *curl = curl_easy_init();

    struct curl_slist *headers = NULL;
    headers = curl_slist_append(headers, "User-Agent: Awesome-Octocat-App");

    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
    curl_easy_setopt(curl, CURLOPT_URL, "http://www.baidu.com/");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, fwrite);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, file);
    // curl_easy_setopt(curl, CURLOPT_SSL_OPTIONS, CURLSSLOPT_NATIVE_CA);

    CURLcode res = curl_easy_perform(curl);

    printf("%d \n",res);
    curl_slist_free_all(headers);
    curl_easy_cleanup(curl);

    fclose(file);
    return 0;
}