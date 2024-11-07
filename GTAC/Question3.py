# Create breadcrumbs

CHILD_IDX = 0
PARENT_IDX = 1
CATEGORY_IDX = 2


def create_breadcrumbs(data):
    breadcrumbs_list = []

    def get_child(parent_node):        
        for row in data:
            if row[PARENT_IDX] == parent_node:
                return f" > {row[CATEGORY_IDX]}" + get_child(row[CHILD_IDX])
            
        return ""
            

    for idx, row in enumerate(data):
        if row[PARENT_IDX] == -1:
            breadcrumbs_list.append(f"{row[CATEGORY_IDX]}" + get_child(row[CHILD_IDX]))

    return breadcrumbs_list


if __name__ == "__main__":
    # Output should be
    # Clothing > Shirts > Printed Shirt
    # Electronics > Camera
    data = [
        [1, -1, 'Clothing'],
        [2, 1, 'Shirts'],
        [3, 2, 'Printed Shirt'],
        [4, -1, 'Electronics'],
        [5, 4, 'Camera']
        # [6, -1, 'Stereo'],
        # [10, 6, 'DVD'],
        # [16, 10, 'CD']
    ]

    print(create_breadcrumbs(data))