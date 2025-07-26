import os

FILENAME = "todo.txt"

def load_tasks():
    if not os.path.exists(FILENAME):
        return []
    with open(FILENAME, 'r', encoding='utf-8') as f:
        return [line.strip() for line in f.readlines()]

def save_tasks(tasks):
    with open(FILENAME, 'w', encoding='utf-8') as f:
        for task in tasks:
            f.write(task + '\n')

def show_tasks(tasks):
    if not tasks:
        print("할 일이 없습니다.\n")
    else:
        print("\n할 일 목록:")
        for i, task in enumerate(tasks, 1):
            print(f"{i}. {task}")
        print()

def add_task(tasks):
    task = input("추가할 할 일을 입력하세요: ").strip()
    if task:
        tasks.append(task)
        print("추가되었습니다.\n")
    else:
        print("빈 내용은 추가할 수 없습니다.\n")

def delete_task(tasks):
    show_tasks(tasks)
    try:
        num = int(input("삭제할 번호를 입력하세요: "))
        if 1 <= num <= len(tasks):
            removed = tasks.pop(num - 1)
            print(f"삭제됨: {removed}\n")
        else:
            print("잘못된 번호입니다.\n")
    except ValueError:
        print("숫자를 입력해주세요.\n")

def main():
    tasks = load_tasks()

    while True:
        print("===ToDo List ===")
        print("1. 할 일 목록 보기")
        print("2. 할 일 추가")
        print("3. 할 일 삭제")
        print("4. 저장 후 종료")
        choice = input("선택: ")

        if choice == '1':
            show_tasks(tasks)
        elif choice == '2':
            add_task(tasks)
        elif choice == '3':
            delete_task(tasks)
        elif choice == '4':
            save_tasks(tasks)
            print("저장 후 종료합니다.")
            break
        else:
            print("잘못된 입력입니다.\n")

if __name__ == "__main__":
    main()
