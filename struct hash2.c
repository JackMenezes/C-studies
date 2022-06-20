#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define HASH_SIZE 100

struct Node{
	char *key;
	char *value;
	struct Node* next;
};

struct Hash{
	struct Node *list[HASH_SIZE];
};

unsigned int hashCode(char *key){
	unsigned long hash = 5381;
	unsigned int c;
	while(c = *key++){
		hash = ((hash << 5) + hash) + c; // hash * 3 + c
	}
	return hash % HASH_SIZE;
};

void insertNode(struct Hash *hash, char *key, char *value){
	unsigned int index = hashCode(Key);
	struct Node *node = hash -> list[index];
	if(node == NULL){
		hash -> list[index] = createNode(key, value);
	} else {
		while(node){
			if(node -> next == NULL){
				node -> next = createNode(key, value);
				break;
				
			}
			node = node -> next;
		}
		
	}
};

char* search(struct Hash *hash, char *key){
	unsigned int index = hashCode(key);
	struct Node *node = hash -> list[index];
	while(node){
		if (strcmp(node -> key, key) == 0){
			return node -> value;
		}
		node = node -> next;
	}
	return "";
}

struct Node* createNode(char *key, char *value){
	struct Node *node = (struct Node*) malloc(sizeof(struct Node));
	node -> key = key;
	node -> value = value;
	return node;
};

void main(){
	struct Hash *hash = (struct Hash*) malloc(sizeof(struct Hash));
	insertNode(hash, "hello", "world");
	insertNode(hash, "Jackson", "Costa");
	// hash["hello"] = "world"
	// hash["jackson"] = "costa"
	
	printf("%s\n", search(hash, "hello"));
	printf("%s\n", search(hash, "jackson"));
	// hash["hello"]
	// hash["jackson"]
	
};







